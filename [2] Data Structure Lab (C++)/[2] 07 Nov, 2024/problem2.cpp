// Initialize two integer arrays of different sizes, 
// merge the input arrays and create a new array,
// then print the new array in reverse order. 

#include <iostream>
using namespace std;

int main()
{
    int arr1[] = { 10,20,30,40,50 };
    int arr2[] = { 1,2,3,4,5,6,7,8 };

    int arr1sz = sizeof(arr1) / sizeof(arr1[0]);
    int arr2sz = sizeof(arr2) / sizeof(arr2[0]);
    int arr3sz = arr1sz + arr2sz;

    int arr3[arr3sz];

    for (int i = 0; i < arr1sz; i++)
    {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < arr2sz; i++)
    {
        arr3[arr1sz + i] = arr2[i];
    }

    for (int i = arr3sz - 1; i >= 0; i--)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}