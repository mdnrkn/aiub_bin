// Initialize an integer array of 10 elements and print how many numbers are odd and how many numbers are even.

// For example,
// Input: 12 32 43 1 54 53 15 64 3 13
// Output: 
// 6 odd numbers
// 4 even numbers

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int arr[n] = { 12, 32, 43, 1, 54, 53, 15, 64, 3, 13 };

    int oddcnt = 0;
    int evencnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2) oddcnt++;
        else evencnt++;
    }

    cout << oddcnt << " odd numbers." << endl;
    cout << evencnt << " even numbers.";

    return 0;
}