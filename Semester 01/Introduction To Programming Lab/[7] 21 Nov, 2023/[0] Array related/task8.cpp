/*
Create an array to store 5 years by taking inputs from the user. Now, develop a program that checks
each year present in the array to determine if the year is leap year  and prints only the leap years
from the array.
*/

#include <iostream>
using namespace std;
int main()
{
    int year[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> year[i];
    }

    cout << "Leap years are : ";
    for (int i = 0; i < 5; i++)
    {
        if (year[i] % 400 == 0 || year[i] % 4 == 0 && year[i] % 100 != 0)
        {
            cout << year[i] << " ";
        }
    }

    return 0;
}