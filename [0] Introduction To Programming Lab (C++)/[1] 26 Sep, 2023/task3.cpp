/*
Problem Statement :
Write a C++ program which will take a number as input then it will check whether the number is
an integer number or a float number.
*/

#include <iostream>
using namespace std;
int main()
{
    float num;
    cin >> num;

    if (num - (int)num == 0)
    {
        cout << "This is an integer type number." << endl;
    }
    else
    {
        cout << "This is a float type number." << endl;
    }
    return 0;
}

/*
Solution approach :
1. Take input from the user.
2. check whether the number is an integer type number or a float type number.
*/