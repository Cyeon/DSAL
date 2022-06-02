#include"0602_BT.h"

int main() {
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
}