// Leap year finding program using Function

#include <iostream>
using namespace std;
void leapYear(int year)
{
    if (year % 400 == 0 || year % 100 == 0 && year % 4 == 0)
        cout << year << " : It's a leap year.";
    else
        cout << year << " : It's not a leap year.";
}
int main()
{
    int year;
    cin >> year;
    leapYear(year);
    return 0;
}