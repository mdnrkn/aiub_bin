// Write insert and delete code for queue

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void push(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (rear == NULL)
    {
        front = rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
}

void pop()
{
    if (front == NULL)
    {
        cout << "Queue is empty!" << endl;
        return;
    }

    Node* tmp = front;
    front = front->next;

    if (front == NULL)
    {
        rear = NULL;
    }

    delete tmp;
}

void traverse()
{
    if (front == NULL)
    {
        cout << "Queue is empty!" << endl;
        return;
    }

    Node* tmp = front;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    cout << "Queue after push: ";
    traverse();

    pop();
    cout << "Queue after first pop: ";
    traverse();

    pop();
    cout << "Queue after second pop: ";
    traverse();

    return 0;
}
