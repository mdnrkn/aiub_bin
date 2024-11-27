#include <iostream>
using namespace std;

void binarySearch(int arr[], int n)
{
    int low = 0;
    int high = 8;

    bool isFound = false;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == n)
        {
            cout << "Element Found" << endl;
            isFound = true;
            break;
        }
        else if (arr[mid] < n) low = mid + 1;
        else high = mid - 1;
    }
    if (!isFound) cout << "Element Not Found" << endl;
}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9 };

    int n;
    cin >> n;

    binarySearch(arr, n);

    return 0;
}