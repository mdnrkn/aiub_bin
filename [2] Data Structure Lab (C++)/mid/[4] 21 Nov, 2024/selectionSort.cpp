// Selection Sort

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minKey = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minKey] > arr[j])
            {
                minKey = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[minKey];
        arr[minKey] = tmp;
    }
}

int main()
{
    int arr[] = { 2,8,11,6,7,5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}