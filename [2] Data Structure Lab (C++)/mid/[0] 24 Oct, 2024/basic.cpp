#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        char ch;
        double a, b;
        cout << "Which operation you want to perform : ";
        cin >> ch;
        cout << "Enter two digits : ";
        cin >> a >> b;

        if (ch == '+') cout << a + b << endl;
        else if (ch == '-') cout << a - b << endl;
        else if (ch == '*') cout << a * b << endl;
        else cout << a / b << endl;

        cout << endl << endl;
    }

    return 0;
}