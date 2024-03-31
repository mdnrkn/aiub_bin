/*
Problem Statement :
Implement a C++ program to check whether a number is divisible by 2, 5 and 11 or not.
Show the use of ‘OR Operator’ and ‘AND Operator’ in the program if necessary.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0 && n % 5 == 0 && n % 11 == 0)
    {
        cout << "This number is divisible by 2, 5 and 11." << endl;
    }
    else
    {
        cout << "This number isn't divisible by 2, 5 and 11." << endl;
    }

    return 0;
}

/*
Solution approach :
1. Take input from the user.
2. check whether the number is divisible by 2, 5 and 11 or not.
*/