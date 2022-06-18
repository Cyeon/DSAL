#include "0616_영어단어장_BT.h"

void BST::InsertRecur(BTreeNode* root, BTreeNode* node)
{
	if (root->key.meaning == node->key.meaning && root->key.word == node->key.word) {
		return;
	}
	else if (node->key.word < root->key.word) {
		if (root->left == NULL) {
			root->left = node;
		}
		else
		{
			InsertRecur(root->left, node);
		}
	}
	else
	{
		if (root->right == NULL) {
			root->right = node;
		}
		else
		{
			InsertRecur(root->right, node);
		}
	}
}

void BST::Delete(BTreeNode* parent, BTreeNode* node)
{
}


void BST::Print(BTreeNode* root)
{
}

void BST::Insert(BTreeNode* node)
{
	if (root == NULL) { root = node; }
	else { InsertRecur(root, node); }
}

void BST::Delete(string word)
{
}

BTreeNode* BST::Search(string word)
{
	BTreeNode* p = root;
	while (p != NULL) {
		if (word == p->key.word)
			return p;
		else if (word[0] < p->key.word[0])
			p = p->left;
		else if (word[0] > p->key.word[0])
			p = p->right;
	}
	return p;     // 탐색에 실패했을 경우 NULL 반환
}

void BST::Levelorder()
{
	queue<BTreeNode*> que;
	BTreeNode* curNode = root;
	while (curNode)
	{
		cout << curNode->key.word << endl;
		if (curNode->left != NULL) { que.push(curNode->left); }
		if (curNode->right != NULL) { que.push(curNode->right); }
		if (que.empty()) { return; }
		curNode = que.front();
		que.pop();

	}
}

BTreeNode* MakeBTreeNode(element e)
{
	return nullptr;
}