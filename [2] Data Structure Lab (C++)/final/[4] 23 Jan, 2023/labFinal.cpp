#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* insertNode(Node* root, int data)
{
    if (root == nullptr) return createNode(data);

    if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }

    else if (data > root->data)
    {
        root->right = insertNode(root->right, data);
    }

    return root;
}

void preorderTraversal(Node* root)
{
    if (root != nullptr)
    {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

bool ValidBST(Node* root)
{
    if (root->left != nullptr && root->left->data > root->data)
        return false;

    if (root->right != nullptr && root->right->data < root->data)
        return false;

    return ValidBST(root->left) && ValidBST(root->right);
}


int main()
{
    Node* root1 = nullptr;
    root1 = insertNode(root1, 6);
    root1 = insertNode(root1, 1);
    root1 = insertNode(root1, 3);

    cout << "The value of each node is : ";
    preorderTraversal(root1);
    cout << endl;

    if (ValidBST(root1))
    {
        cout << "This is a Binary Search Tree." << endl;
    }
    else
    {
        cout << "This is not a Binary Search Tree." << endl;
    }

    Node* root2 = nullptr;
    root2 = insertNode(root2, 6);
    root2 = insertNode(root2, 1);
    root2 = insertNode(root2, 10);

    cout << "The value of each node is : ";
    preorderTraversal(root2);
    cout << endl;

    if (ValidBST(root2))
    {
        cout << "This is a Binary Search Tree." << endl;
    }
    else
    {
        cout << "This is not a Binary Search Tree." << endl;
    }
    return 0;
}