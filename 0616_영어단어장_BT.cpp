#include "0616_영어단어장_BT.h"

void BST::InsertRecur(BTreeNode* root, BTreeNode* node)
{
    if (root->key.word[0] == node->key.word[0])  return;

    else if (node->key.word[0] < root->key.word[0])
    {
        if (root->left == NULL)
            root->left = node;
        else
            InsertRecur(root->left, node);
    }
    else
    {
        if (root->right == NULL)
            root->right = node;
        else
            InsertRecur(root->right, node);
    }
}

inline void BST::Delete(BTreeNode* parent, BTreeNode* node)
{
    if (node->left == NULL && node->right == NULL) {
        if (parent->left == node) {
            parent->left = NULL;
        }
        else {
            parent->right = NULL;
        }
    }
    else if (node->left == NULL) {
        if (parent->left == node) {
            parent->left = node->right;
        }
        else {
            parent->right = node->right;
        }
    }
    else if (node->right == NULL) {
        if (parent->left == node) {
            parent->left = node->left;
        }
        else {
            parent->right = node->left;
        }
    }
    else {
        BTreeNode* temp = node->right;
        while (temp->left != NULL) {
            temp = temp->left;
        }
        node->key = temp->key;
        Delete(node, temp);
    }
}

void BST::Print(BTreeNode* root)
{
    if (root->left)
        Print(root->left);
    cout << "단어 : " << root->key.word << "  뜻 : " << root->key.meaning << endl;

    if (root->right)
        Print(root->right);
}

void BST::Insert(BTreeNode* node)
{
    if (root == NULL)root = node;
    else InsertRecur(root, node);
}

void BST::Delete(string word)
{
    if (root == NULL)return;
    BTreeNode* parent = NULL;
    BTreeNode* node = root;

    while (node != NULL && node->key.word != word)
    {
        parent = node;
        node = (word < node->key.word) ? node = node->left : node->right;
    }
    if (node == NULL)
    {
        cout << "key is not in the tree" << endl;
        return;
    }
    else Delete(parent, node);
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
    queue<BTreeNode*> q;

    BTreeNode* curNode = root;

    while (curNode)
    {
        cout << curNode->key.word << endl;
        if (curNode->left)q.push(curNode->left);
        if (curNode->right)q.push(curNode->right);

        if (q.empty())break;

        curNode = q.front();
        q.pop();
    }
}

BTreeNode* MakeBTreeNode(element e)
{
    BTreeNode* node = new BTreeNode;
    node->left = NULL;
    node->right = NULL;
    node->key = e;

    return node;
}