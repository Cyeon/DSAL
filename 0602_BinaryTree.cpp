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
/// 전위
/// </summary>
/// <param name="bt"></param>
void PreorderTraverse(BTreeNode* bt)
{
	//종료 조건
	if (bt == NULL) { return; }
	//현재 노드 방문(출력)
	cout << bt->data << " ";
	//다음 방문
	PreorderTraverse(bt->left);
	PreorderTraverse(bt->right);
}
/// <summary>
/// 중위
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
/// 후위
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

		//연산자, 피연산자 체크 
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

	// 종료 조건
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