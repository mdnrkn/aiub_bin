#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int* a = &x;
    cout << a << endl;
    cout << *a << endl;
    cout << &a << endl;
    return 0;
}