/*
Problem Statement :
Write a C++ program which takes a year as input from the user. Afterwards, it checks if the year is
a valid year or not (1800-2023). If the year is a valid year, then it will find out whether the year is
a leap year or not.
*/

#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;

    if (year >= 1800 && year <= 2023)
    {
        if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        {
            cout << "It's a Leap Year." << endl;
        }
        else
        {
            cout << "It's not a Leap Year." << endl;
        }
    }
    else
    {
        cout << "Enter a valid year";
    }

    return 0;
}

/*
Solution approach :
1. Take input from the user.
2. Checks if the year is a valid year or not (1800-2023).
3. If the the year is a valid year, then check if the year is a leap year or not.
*/