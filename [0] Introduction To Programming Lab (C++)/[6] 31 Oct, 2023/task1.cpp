/*
Problem Statement :
Write a C++ program to find prime numbers from inputted digits using 2D array.
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
         << "Inputted numbers are : " << endl;

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
            bool check = true;

            if (arr[i][j] <= 1)
            {
                check = false;
            }
            else
            {
                for (int k = 2; k * k <= arr[i][j]; k++)
                {
                    if (arr[i][j] % k == 0)
                    {
                        check = false;
                        break;
                    }
                }
            }

            if (check)
            {
                cout << arr[i][j] << " : is a prime number." << endl;
            }
            else
            {
                cout << arr[i][j] << " : is not a prime number." << endl;
            }
        }
    }

    return 0;
}

/*
Solution approach :
1. Take input from the user.
2. Run a loop and check whether the number is prime or not.
3. Print the prime or non-prime numbers with a message.
*/