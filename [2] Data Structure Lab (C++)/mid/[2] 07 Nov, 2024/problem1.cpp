// Read two arrays of 3x3 size, and print the multiplication of two arrays in the output.

#include <iostream>
using namespace std;

int main()
{
    int n = 2;
    int arr1[n][n], arr2[n][n], arr3[n][n];

    cout << "Input 1st array elements : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }

    }

    cout << "Input 2nd array elements : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                arr3[i][i] += arr1[i][k] * arr2[k][j];
            }

        }

    }

    cout << "Multiplication of two arrays : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}