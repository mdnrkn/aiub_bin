// Do the following to write program for binary search: 
// Store some numbers in an array Apply a sorting algorithm to sort the array 
// Print the sorted input array Input a searching number Apply searching using Binary Search algorithm 
// Print the position if found otherwise print “Not found”

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

void binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    bool isFound = false;

    cout << "Element: " << key << endl;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            cout << "Element Index: " << mid << endl;
            cout << "Element Position: " << mid + 1;
            isFound = true;
            break;
        }
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    if (!isFound) cout << "Not found";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key;
    cin >> key;

    binarySearch(arr, n, key);

    return 0;
}