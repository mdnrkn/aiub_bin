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

// Node insertion in BST
Node* insertNode(Node* root, int data)
{
    // if the tree is empty, return a new node
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

// Key value searching
Node* searchNode(Node* root, int key)
{
    if (root == nullptr || root->data == key) return root;

    if (root->data < key)
    {
        return searchNode(root->right, key);
    }

    return searchNode(root->left, key);
}

// find inorder successor
Node* minValueNode(Node* node)
{
    Node* current = node;
    // loop to find leftmost leaf
    while (current && current->left != nullptr)
    {
        current = current->left;
    }
    return current;
}

// delete a Node
Node* deleteNode(Node* root, int data)
{
    if (root == nullptr) return root;

    // if the data is smaller than the root data then it lies in the left subtree
    if (data < root->data)
    {
        root->left = deleteNode(root->left, data);
    }

    // if the data is greater than the root data then it lies in the right subtree
    else if (data > root->data)
    {
        root->right = deleteNode(root->right, data);
    }

    // if data is same as root data, then delete the root data
    else
    {
        // node with only one child or no child
        if (root->left == nullptr)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // node with two children
        Node* temp = minValueNode(root->right);

        root->data = temp->data;

        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorderTraversal(Node* root)
{
    if (root != nullptr)
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
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

void postorderTraversal(Node* root)
{
    if (root != nullptr)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    Node* root = nullptr;

    //          50
    //        /   \
    //      30     70
    //     / \    / \
    //    25  40 60  80

    // create a BST
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    // delete a Node in BST
    root = deleteNode(root, 20);

    // insert a node in BST
    root = insertNode(root, 25);
    cout << "After insertion of 25 : ";

    // search a key in BST
    Node* found = searchNode(root, 25);

    // check if the key is found or not
    if (found != nullptr)
    {
        cout << "Node 25 found in the BST." << endl;
    }
    else
    {
        cout << "Node 25 not found in the BST." << endl;
    }

    cout << "The right Node of " << root->data << " is " << root->right->data << endl;
    cout << "The left Node of " << root->data << " is " << root->left->data << endl;

    cout << endl;
    cout << "Inorder Tree Traversal : ";
    inorderTraversal(root);
    cout << endl;

    cout << endl;
    cout << "Preorder Tree Traversal : ";
    preorderTraversal(root);
    cout << endl;

    cout << endl;
    cout << "Postorder Tree Traversal : ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}