/*
Problem Statement :
Write a C++ program to take five float variables as input from the user. Find out the summation
and average of five numbers and check whether the average is an even number or an odd number.
*/

#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d, e;
    cout << "Enter the five numbers : " << endl;
    cin >> a >> b >> c >> d >> e;

    float sum;
    int avg;
    sum = a + b + c + d + e;
    avg = sum / 5;

    if (avg % 2 == 0)
    {
        cout << "The average of 5 numbers is an even number." << endl;
    }
    else
    {
        cout << "The average of 5 numbers is an odd number." << endl;
    }

    return 0;
}

/*
Solution approach :
1. Take input from the user.
2. Calculate the summation and the average.
3. Check whether the average is an even number or an odd number.
*/