/*
Problem Statement :
Write a C++ program to store 5 float numbers. Find out the summation and average of 5 numbers.
*/

#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d, e;
    cout << "Enter 5 numbers : " << endl;
    cin >> a >> b >> c >> d >> e;
    float sum, avg;
    sum = a + b + c + d + e;
    avg = sum / 5;
    cout << "The summation of 5 numbers : " << sum << endl
         << "The average of 5 numbers : " << avg << endl;
    return 0;
}

/*
Solution approach :
1. Take input from the user.
2. Perform summation and average calculations.
3. Print the results in separate lines.
*/