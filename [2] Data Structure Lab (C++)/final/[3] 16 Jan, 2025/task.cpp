#include <iostream>
using namespace std;

struct Node
{
    int employeeID;
    int salary;
    int age;
    Node* left;
    Node* right;
};

Node* createNode(int employeeID, int salary, int age)
{
    Node* newNode = new Node();
    newNode->employeeID = employeeID;
    newNode->salary = salary;
    newNode->age = age;

    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* insertNode(Node* root, int employeeID, int salary, int age)
{
    if (root == nullptr) return createNode(employeeID, salary, age);

    if (age < root->age)
    {
        root->left = insertNode(root->left, employeeID, salary, age);
    }

    else if (age > root->age)
    {
        root->right = insertNode(root->right, employeeID, salary, age);
    }

    return root;
}

Node* searchNode(Node* root, int age)
{
    if (root == nullptr || root->age == age) return root;

    if (root->age < age)
    {
        return searchNode(root->right, age);
    }

    return searchNode(root->left, age);
}

int main()
{
    Node* root = nullptr;

    //        21
    //       /  \
    //      20   23
    //     / 
    //    19 

    root = insertNode(root, 56, 20000, 21);
    root = insertNode(root, 12, 10000, 20);
    root = insertNode(root, 34, 15000, 19);
    root = insertNode(root, 78, 25000, 23);

    int age;
    cout << "Enter age : ";
    cin >> age;
    cout << endl;

    Node* found = searchNode(root, age);

    if (found != nullptr)
    {
        cout << "Information about age : " << age << endl;
        cout << "EmployeeID : " << found->employeeID << endl;
        cout << "Salary : " << found->salary << endl;
        cout << "Age : " << found->age << endl << endl;

        if (found->right != nullptr)
        {
            cout << "Information in the right side of age : " << age << endl;
            cout << "EmployeeID : " << found->right->employeeID << endl;
            cout << "Salary : " << found->right->salary << endl;
            cout << "Age : " << found->right->age << endl;
        }
        else cout << "No information found in the right side of age : " << age;
    }
    else cout << "No information found";

    return 0;
}