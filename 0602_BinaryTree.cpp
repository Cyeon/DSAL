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
	// 구현해보자!
	// 처음부터 짜기 많이 어려우면 첨부된 cpp 파일의 주석 부분 내용 채우기~!! 
}

int prec(char op) {
	// 구현해보자!
}
string infixToPostfix(string infix) {
	// 구현해보자!
}
