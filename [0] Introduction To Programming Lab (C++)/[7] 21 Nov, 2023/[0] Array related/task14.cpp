/*
Develop a program that has a 2D array that stores floating point numbers given by user. Later, the
program takes a number as input and searches the number whether it is present or not present in the
array.
*/

#include <iostream>
using namespace std;
int main()
{
    int r, c, key;
    cout << "Enter the value of r, c : ";
    cin >> r >> c;
    cout << endl;

    float arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter a key value : ";
    cin >> key;
    cout << endl;

    bool check = false;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (key == arr[i][j])
            {
                check = true;
                break;
            }
        }
    }

    if (check)
        cout << "Key value is present in the array.";
    else
        cout << "Key value isn't present in the array.";

    return 0;
}
