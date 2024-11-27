#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int n;
        cout << "Enter the size of the array : ";
        cin >> n;
        int arr[n];

        cout << "Enter the elements of the array : ";
        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << "Elements of the array : ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";

        cout << endl << endl;
    }

    return 0;
}