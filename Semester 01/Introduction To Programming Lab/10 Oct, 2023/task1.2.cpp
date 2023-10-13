/*
Problem Statement :
Write a C++ program for the following pattern.
-----------------
5
5 10
5 10 15
5 10 15 20
5 10 15 20 25
5 10 15 20 25 30
-----------------
*/

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j * 5 << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Solution approach :
1. Focus on the rows and columns.
2. The pattern starts with number 5, and each row following the row-th number for printing the number pattern.
3. Find a logic to print the pattern. 
*/