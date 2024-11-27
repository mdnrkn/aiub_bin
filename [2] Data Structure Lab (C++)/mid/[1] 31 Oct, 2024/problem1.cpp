// Initialize an array of 10 elements and print the array elements both in normal and reverse order.

// For example,
// Input: 12 32 43 1 54 53 15 64 3 13
// Output: 13 3 64 15 53 54 1 43 32 12

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int arr[n] = { 12, 32, 43, 1, 54, 53, 15, 64, 3, 13 };

    cout << "Printing the array in normal order : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Printing the array in reverse order : ";

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}