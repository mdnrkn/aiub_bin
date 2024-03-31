/*
Develop a program that stores five countries’ names using a single 2D array and prints the names
at the end.
*/

#include <iostream>
using namespace std;
int main()
{
    string str[1][5];
    for (int i = 0; i < 5; i++)
    {
        cin >> str[0][i];
        cout << str[0][i] << " ";
    }

    return 0;
}