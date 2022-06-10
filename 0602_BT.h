#pragma once
#include <iostream>
#include<stack>
using namespace std;

struct BTreeNode
{
	int data;
	struct BTreeNode* left;
	struct BTreeNode* right;
};
class BST {
public:
    BTreeNode* root = NULL;
    void Insert(BTreeNode* node);
    void InsertRecur(BTreeNode* root, BTreeNode* node);
    void Delete(int key);
    void Delete(BTreeNode* parent, BTreeNode* node);
    void SetCursorPosition(int x, int y);
    void Print(BTreeNode* node, int x, int y);
};
BTreeNode* MakeBTreeNode(void);
void DeleteBTreeNode(BTreeNode* bt);
int GetData(BTreeNode* bt);
void SetData(BTreeNode* bt, int data);
BTreeNode* GetLeftSubTree(BTreeNode* bt);
BTreeNode* GetRightSubTree(BTreeNode* bt);
void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub);
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub);
void PreorderTraverse(BTreeNode* bt);
void InorderTraverse(BTreeNode* bt);
void PostorderTraverse(BTreeNode* bt);
BTreeNode* MakeExpTree(string exp);
int EvaluateExpTree(BTreeNode* bt);
int prec(char op);
string infixToPostfix(string infix);