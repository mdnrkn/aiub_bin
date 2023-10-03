/*
Problem Statement :
Take a character as input through the keyboard. Write a program to find out whether the gender is
Male or Female. (Using switch case)
Inputs: take input ‘M’ or ‘m’ for male and take input ‘F’ or ‘f’ for female. For any other input, the
result will show “Undefined”.
*/

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;

    switch (ch)
    {
    case 'm':
        cout << "The gender is Male." << endl;
        break;
    case 'M':
        cout << "The gender is Male." << endl;
        break;
    case 'f':
        cout << "The gender is Female." << endl;
        break;
    case 'F':
        cout << "The gender is Female." << endl;
        break;
    default:
        cout << "Undefined." << endl;
    }
    return 0;
}

/*
Solution approach :
1. Take input from the user.
2. Check if the input is (‘M’ or ‘m’) and (‘F’ or ‘f’) or not using Switch Case.
3. For any other input, print “Undefined”.
4. Print Male for ‘M’ or ‘m’ input, and Print Female for ‘F’ or ‘f’ input.
*/