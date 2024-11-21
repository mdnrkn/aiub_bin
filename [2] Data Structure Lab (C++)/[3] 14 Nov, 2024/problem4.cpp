#include <iostream>
using namespace std;

void modify(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] += 2;
    }
}

int main()
{
    int* a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    modify(a, 5);

    cout << "Modified Array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}