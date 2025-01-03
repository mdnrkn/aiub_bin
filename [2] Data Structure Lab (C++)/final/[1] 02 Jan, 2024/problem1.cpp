// Write a program for Stack that takes user input from the user to do the following instructions.
// 1. Push (the maximum size of the Stack is 10, if the Stack is full, print Stack is full) 
// 2. Pop (if the Stack is empty, print Stack is empty)
// 3. Display the Stack 

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;
int maxSize = 10;
int currentSize = 0;

void push(int data)
{
    if (currentSize >= maxSize)
    {
        cout << "Stack is Full" << endl;
        return;
    }

    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    currentSize++;
    cout << "Stack size : " << currentSize << endl;

}

void pop()
{
    if (currentSize == 0)
    {
        cout << "Stack is Empty" << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
    currentSize--;
    cout << "Stack size : " << currentSize << endl;
}

void traverse()
{
    if (currentSize == 0)
    {
        cout << "Stack is Empty" << endl;
        return;
    }

    Node* tmp = head;
    cout << "Display Stack : ";
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    int input, data;
    while (true)
    {
        cout << endl << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl << endl;
        cout << "Enter your input: ";
        cin >> input;

        if (input == 1)
        {
            cout << "Enter data: ";
            cin >> data;
            push(data);
        }
        else if (input == 2) pop();
        else if (input == 3) traverse();
        else if (input == 4)
        {
            cout << "Exiting program." << endl;
            return 0;
        }
        else cout << "Invalid input. Please try again." << endl;
    }

    return 0;
}