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

		}
		else
		{

		}
		stk.push(pNode);
	}


	return pNode;

}

int EvaluateExpTree(BTreeNode* bt)
{
	// �����غ���!
	// ó������ ¥�� ���� ������ ÷�ε� cpp ������ �ּ� �κ� ���� ä���~!! 
}

int prec(char op) {
	// �����غ���!
}
string infixToPostfix(string infix) {
	// �����غ���!
}
