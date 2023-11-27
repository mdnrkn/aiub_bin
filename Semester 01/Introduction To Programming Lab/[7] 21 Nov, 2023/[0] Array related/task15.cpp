/*
Develop a program that has two 2D matrices of same size. Later, the program displays the rows,
columns of each array as well as performs matrix addition, subtraction, and multiplication between
the matrices. Finally, the program prints all the results.
*/

#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;
    cout << endl
         << "Enter the elements : ";

    int arr[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl
         << "Inputted elements are : " << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int add = 0, sub = 0, mlt = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            add += arr[i][j];
            sub -= arr[i][j];
            mlt *= arr[i][j];
        }
    }

    cout << "Addition : " << add << endl
         << "Subtraction : " << sub << endl
         << "Multiplication : " << mlt;

    return 0;
}