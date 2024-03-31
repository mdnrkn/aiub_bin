/*
Problem Statement :
Develop a program that has an array which stores 4 integer numbers and 4 floating point numbers by asking the user for inputs. The program estimates the summation, average as well as multiplication of the stored numbers and prints all the results.
*/

#include <iostream>
using namespace std;
int main()
{
    float arr[8], sum = 0, avg, mlt = 1;

    cout << "Enter 4 integer numbers and 4 floating numbers : ";

    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        mlt *= arr[i];
    }

    cout << endl;

    avg = sum / 8;

    cout << "Summation of the numbers : " << sum << endl
         << "Average of the numbers : " << avg << endl
         << "Multiplication of the numbers : " << mlt << endl;

    return 0;
}