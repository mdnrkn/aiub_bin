// Write insert and delete code for double linked list

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;

void insertAtFirst(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL)
    {
        head->prev = newNode;
    }

    head = newNode;
}

void insertAtPosition(int position, int data)
{
    if (position <= 0)
    {
        cout << "Invalid position!" << endl;
        return;
    }

    Node* newNode = new Node();
    newNode->data = data;

    if (position == 1)
    {
        newNode->next = head;
        newNode->prev = NULL;
        if (head != NULL)
        {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    Node* tmp = head;
    for (int i = 1; i < position - 1 && tmp != NULL; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        cout << "Position out of range!" << endl;
        return;
    }

    newNode->next = tmp->next;
    newNode->prev = tmp;

    if (tmp->next != NULL)
    {
        tmp->next->prev = newNode;
    }

    tmp->next = newNode;
}

void insertAtEnd(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
    newNode->prev = tmp;
}

void deleteAtFirst()
{
    if (head == NULL)
    {
        cout << "Linked List is empty!" << endl;
        return;
    }

    Node* tmp = head;
    head = head->next;

    if (head != NULL)
    {
        head->prev = NULL;
    }

    delete tmp;
}

void deleteAtPosition(int position)
{
    if (position <= 0 || head == NULL)
    {
        cout << "Invalid position or empty list!" << endl;
        return;
    }

    Node* tmp = head;

    if (position == 1)
    {
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        delete tmp;
        return;
    }

    for (int i = 1; i < position && tmp != NULL; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        cout << "Position out of range!" << endl;
        return;
    }

    if (tmp->next != NULL)
    {
        tmp->next->prev = tmp->prev;
    }

    if (tmp->prev != NULL)
    {
        tmp->prev->next = tmp->next;
    }

    delete tmp;
}

void deleteAtEnd() {
    if (head == NULL)
    {
        cout << "Linked List is empty!" << endl;
        return;
    }

    Node* tmp = head;

    if (tmp->next == NULL)
    {
        head = NULL;
        delete tmp;
        return;
    }

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->prev->next = NULL;
    delete tmp;
}

void traverse()
{
    Node* tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    insertAtFirst(10);
    insertAtFirst(20);
    insertAtEnd(30);
    insertAtPosition(2, 25);

    cout << "List after insertions: ";
    traverse();

    deleteAtFirst();
    cout << "List after deleting first node: ";
    traverse();

    deleteAtPosition(2);
    cout << "List after deleting node at position 2: ";
    traverse();

    deleteAtEnd();
    cout << "List after deleting last node: ";
    traverse();

    return 0;
}
