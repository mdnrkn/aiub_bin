#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = new Node();

void push(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    newNode->next = head;
    head = newNode;
}

void pop()
{
    if (!head)
    {
        cout << "Linked List Empty" << endl;
        return;
    }

    head = head->next;
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

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    traverse();

    cout << endl << "After Pop" << endl << endl;
    pop();
    traverse();

    return 0;
}