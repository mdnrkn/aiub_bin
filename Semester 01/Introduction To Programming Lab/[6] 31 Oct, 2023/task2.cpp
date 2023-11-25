/*
Problem Statement :
Write a C++ program to find out whether the inputted year is a leap year or not using 2D array.
*/

#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the number of rows and columns : " << endl;
    cin >> r >> c;

    int arr[r][c];
    cout << "Enter the elements of rows and columns : ";

    cout << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl
         << "Inputted years are : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] % 400 == 0 || arr[i][j] % 4 == 0 && arr[i][j] % 100 != 0)
            {
                cout << arr[i][j] << " : It's a Leap Year." << endl;
            }
            else
            {
                cout << arr[i][j] << " : It's not a Leap Year." << endl;
            }
        }
    }

    return 0;
}

/*
Solution approach :
1. Take input from the user.
2. Run a loop and check whether the year is leap year or not.
3. Print the years with a message.
*/