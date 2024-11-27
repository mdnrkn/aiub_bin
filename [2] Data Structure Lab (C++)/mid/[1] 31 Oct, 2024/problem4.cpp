// Write a program to perform matrix addition between 3 matrices. 

// For example,
// Input:
// 12 13 14     1 2 3     101 104 107
// 15 16 17     4 5 6     102 105 108
// 18 19 20     7 8 9     103 106 109

// Output:
// 114 119 124
// 121 126 131
// 128 133 138


#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int arr1[n][n], arr2[n][n], arr3[n][n], arrSum[n][n];

    cout << "Input 1st matrix elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }

    }

    cout << "Input 2nd matrix elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }

    }

    cout << "Input 3rd matrix elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr3[i][j];
        }

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arrSum[i][j] = arr1[i][j] + arr2[i][j] + arr3[i][j];
        }

    }

    cout << "Output : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arrSum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}