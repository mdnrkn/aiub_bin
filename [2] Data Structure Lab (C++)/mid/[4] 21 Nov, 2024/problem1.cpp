// Using Selection Sort

#include <iostream>
using namespace std;

int compare = 0;
int exchange = 0;

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
            compare++;
        }
        int tmp = arr[i];
        arr[i] = arr[minKey];
        arr[minKey] = tmp;
        exchange++;
    }
}

int main()
{
    // int arr[] = {92, 82, 21, 16, 18, 95};
    // int n = sizeof(arr) / sizeof(arr[0]);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Unsorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Number of comparisons : " << compare << endl;
    cout << "Number of exchanges : " << exchange << endl;

    return 0;
}