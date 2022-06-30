#include"0602_BT.h"

BTreeNode* MakeBTreeNode(void)
{
	BTreeNode* nd = new BTreeNode;
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}

void DeleteBTreeNode(BTreeNode* bt) {
	delete bt;
}

int GetData(BTreeNode* bt) {
	return bt->data;
}

void SetData(BTreeNode* bt, int data) {
	bt->data = data;
}
BTreeNode* GetLeftSubTree(BTreeNode* bt) {
	return bt->left;
}

BTreeNode* GetRightSubTree(BTreeNode* bt) {
	return bt->right;
}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub) {
	if (main->left != NULL) {
		delete main->left;
	}
	main->left = sub;
}

void MakeRightSubTree(BTreeNode* main, BTreeNode* sub) {
	if (main->right != NULL) {
		delete main->right;
	}
	main->right = sub;
}

/// <summary>
/// ����
/// </summary>
/// <param name="bt"></param>
void PreorderTraverse(BTreeNode* bt)
{
	//���� ����
	if (bt == NULL) { return; }
	//���� ��� �湮(���)
	cout << bt->data << " ";
	//���� �湮
	PreorderTraverse(bt->left);
	PreorderTraverse(bt->right);
}
/// <summary>
/// ����
/// </summary>
/// <param name="bt"></param>
void InorderTraverse(BTreeNode* bt)
{
	if (bt == NULL) { return; }
	InorderTraverse(bt->left);
	cout << bt->data << " ";
	InorderTraverse(bt->right);
}
/// <summary>
/// ����
/// </summary>
/// <param name="bt"></param>
void PostorderTraverse(BTreeNode* bt)
{
	if (bt == NULL) { return; }
	PostorderTraverse(bt->left);
	PostorderTraverse(bt->right);
	cout << bt->data << " ";
}
BTreeNode* MakeExpTree(string exp)
{
	stack<BTreeNode*> stk;
	BTreeNode* pNode = NULL;
	for (int i = 0; i < exp.length(); i++)
	{
		pNode = MakeBTreeNode();

		//������, �ǿ����� üũ 
		if (isdigit(exp[i])) {
			SetData(pNode, exp[i] - '0');
		}
		else
		{
			SetData(pNode, exp[i]);
			MakeRightSubTree(pNode, stk.top());
			stk.pop();
			MakeLeftSubTree(pNode, stk.top());
			stk.pop();
		}
		stk.push(pNode);
	}
	pNode = stk.top();
	stk.pop();
	return pNode;
}

int EvaluateExpTree(BTreeNode* bt)
{
	int op1, op2;

	// ���� ����
	if (GetLeftSubTree(bt) == NULL && GetRightSubTree(bt) == NULL){
		return GetData(bt);
	}
	op1 = EvaluateExpTree(GetLeftSubTree(bt));
	op2 = EvaluateExpTree(GetRightSubTree(bt));
	switch (GetData(bt))
	{
	case '+':
		return op1 + op2;
	case '-':
		return op1 - op2;
	case '*':
		return op1 * op2;
	case '/':
		return op1 / op2;
	}
	return 0;
}

int prec(char op) {
	switch (op)
	{
	case '(':
	case ')':
		return 0;
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2;
	}
	return -1;
}
string infixToPostfix(string infix) {
	string postfix = "";
	stack<int> stk;
	char temp;
	for (int i = 0; i < infix.length(); i++)
	{
		temp = infix[i];
		switch (temp)
		{
		case '+':
		case '-':
		case '*':
		case '/':
			while (!stk.empty() && prec(temp) <= (stk.top()))
			{
				postfix += stk.top();
				stk.pop();
			}
			stk.push(temp);
			break;
		case '(':
			stk.push(temp);
			break;
		case ')':
			while (stk.top() != '(')
			{
				postfix += stk.top();
				stk.pop();
			}
			stk.pop();
			break;
		default:
			postfix += temp;
			break;
		}
	}
	while (!stk.empty())
	{
		postfix += stk.top();
		stk.pop();
	}
	return postfix;
}