/*
Build a program that has two arrays where the size of each array is 6 to store floating point and
integer numbers. Later, the program multiplies each index element of the first array with each index
element of the second array, but in the opposite order of the second array's indexes.
*/

#include <iostream>
using namespace std;
int main()
{
    float arr1[6], arr2[6], mlt[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < 6; i++)
    {
        mlt[i] = arr1[i] * arr2[5 - i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << mlt[i] << " ";
    }

    return 0;
}