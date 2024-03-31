/*
Problem Statement :
Write a C++ program for the following pattern.
-----------
    *
   ***
  *****
 *******
*********
*********
*********
*********
*********
-----------
*/

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        // spaces
        for (int j = 0; j < 5 - i - 1; j++)
        {
            cout << " ";
        }
        // asterisks
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 5 - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 9; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/*
Solution approach :
1. 5 rows of asterisks (like a pyramid shape) need to print.
2. Focus on the columns, each column has spaces and asterisks, so the 1st pattern will be like this -
----------------------------
spaces   asterisks   spaces
  4          1         4
  3          3         3
  2          5         2
  1          7         1
  0          9         0
----------------------------
3. Find a logic to print spaces, asterisks and spaces.
4. After that, 4 rows of asterisks (like a rectangular/square shape) need to print.
5. Each row has 9 asterisks, so the 2nd pattern will be like this -
-----------------------
1st row - 9 asterisks
2nd row - 9 asterisks
3rd row - 9 asterisks
4th row - 9 asterisks
-----------------------
6. Find a logic to print the rows of asterisks.
7. As both of these patterns are printing together, so the final pattern will be same as the statement pattern.
*/