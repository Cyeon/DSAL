#include"0602_BT.h"
int main() {
	/*
	BTreeNode* bt1 = MakeBTreeNode();
	BTreeNode* bt2 = MakeBTreeNode();
	BTreeNode* bt3 = MakeBTreeNode();
	BTreeNode* bt4 = MakeBTreeNode();
	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);
	MakeLeftSubTree(bt1, bt2);
	MakeRightSubTree(bt1, bt3);
	MakeLeftSubTree(bt2, bt4);
	cout << GetData(GetLeftSubTree(bt1)) << endl;
	cout << GetData(GetLeftSubTree(GetLeftSubTree(bt1))) << endl;
	DeleteBTreeNode(bt1);
	DeleteBTreeNode(bt2);
	DeleteBTreeNode(bt3);
	DeleteBTreeNode(bt4);
	*/

	/*BTreeNode* bt1 = MakeBTreeNode();
	BTreeNode* bt2 = MakeBTreeNode();
	BTreeNode* bt3 = MakeBTreeNode();
	BTreeNode* bt4 = MakeBTreeNode();
	BTreeNode* bt5 = MakeBTreeNode();
	BTreeNode* bt6 = MakeBTreeNode();

	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);
	SetData(bt5, 5);
	SetData(bt6, 6);
	MakeLeftSubTree(bt1, bt2);

	MakeRightSubTree(bt1, bt3);
	MakeLeftSubTree(bt2, bt4);
	MakeRightSubTree(bt2, bt5);
	MakeRightSubTree(bt3, bt6);*/

	//PreorderTraverse(bt1);
	//cout << endl;
	//InorderTraverse(bt1);
	//cout << endl;
	//PostorderTraverse(bt1);
	//cout << endl;

	/*string infix;
	cout << "중위표기수식 : ";
	cin >> infix;
	BTreeNode* eTree = MakeExpTree(infixToPostfix(infix));
	double res = EvaluateExpTree(eTree);
	cout << res;*/

	BTreeNode* bt1 = MakeBTreeNode();
	BTreeNode* bt2 = MakeBTreeNode();
	BTreeNode* bt3 = MakeBTreeNode();
	BTreeNode* bt4 = MakeBTreeNode();
	BTreeNode* bt5 = MakeBTreeNode();

	BST bst;
	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);
	SetData(bt5, 5);
	bst.Insert(bt3);
	bst.Insert(bt2);
	bst.Insert(bt1);
	bst.Insert(bt4);
	bst.Insert(bt5);
	bst.Delete(2);
	bst.Print(bst.root, 10, 0);
}