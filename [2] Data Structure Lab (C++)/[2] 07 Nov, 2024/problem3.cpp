// Print all the unique elements from two different sizes arrays.

#include <iostream>
using namespace std;

int main()
{
    int arr1[] = { 1,4,6,3,6,9 };
    int arr2[] = { 5,3,7,1,2,6 };
    int arr3[6];

    bool isCommon = false;
    int x = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr3[x] = arr1[i];
                x++;
                arr2[j] = -1;
                isCommon = true;
            }
        }
    }

    if (isCommon)
    {
        for (int i = 0; i < x; i++)
        {
            cout << arr3[i] << " ";
        }
    }
    else
    {
        cout << "No common elements.";
    }

}