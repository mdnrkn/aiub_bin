#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = new Node();

void insertAtFirst(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    newNode->next = head;
    head = newNode;
}

void insertAtPosition(int position, int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    Node* tmp = head;
    for (int i = 1; i < position - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insertAtEnd(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}

void deleteAtFirst()
{
    if (!head)
    {
        cout << "Linked List Empty" << endl;
        return;
    }

    head = head->next;
}

void deleteAtPosition(int position)
{
    Node* tmp = head;

    for (int i = 1; i < position - 1;i++)
    {
        tmp = tmp->next;
    }

    if (!tmp || !tmp->next)
    {
        cout << "Position is out of Range" << endl;
    }

    Node* nodeToDelete = tmp->next;
    tmp->next = tmp->next->next;
    delete nodeToDelete;
}

void deleteAtEnd()
{
    Node* tmp = head;

    while (tmp->next->next)
    {
        tmp = tmp->next;
    }

    delete tmp->next;
    tmp->next = NULL;
}

void traverse()
{
    Node* tmp = head;
    cout << tmp->data << endl;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
        cout << tmp->data << endl;
    }
}

int main()
{
    head->data = 10;
    head->next = NULL;

    insertAtFirst(20);
    insertAtFirst(30);
    traverse();

    cout << endl << "After insert at Position 2" << endl << endl;
    insertAtPosition(2, 50);
    traverse();

    cout << endl << "After insert at End" << endl << endl;
    insertAtEnd(70);
    traverse();

    cout << endl << "After delete at First" << endl << endl;
    deleteAtFirst();
    traverse();

    cout << endl << "After delete at Position 3" << endl << endl;
    deleteAtPosition(3);
    traverse();

    cout << endl << "After delete at End" << endl << endl;
    deleteAtEnd();
    traverse();

    return 0;
}