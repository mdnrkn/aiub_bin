/*
Problem Statement :
Develop a program that takes three student’s CGPAs as inputs using a single array and finds the lowest CGPA.
*/

#include <iostream>
using namespace std;
int main()
{
    float cgpa[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> cgpa[i];
    }

    float lowCgpa = cgpa[0];

    for (int i = 0; i < 3; i++)
    {
        if (cgpa[i] < lowCgpa)
            lowCgpa = cgpa[i];
    }

    cout << lowCgpa;

    return 0;
}