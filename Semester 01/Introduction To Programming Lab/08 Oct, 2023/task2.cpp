/*
Problem Statement :
Take a digit as input. Write a program using loop to solve the reverse pyramid pattern problem below -
---------
*******
 *****
  ***
   *
---------
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // asterisk
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Solution approach :
1. Take input from the user.
2. Input n will be the number of lines have to print.
3. Focus on the columns, each column has spaces, asterisks and spaces.
4. if n = 4, then the pattern will be like this -
----------------------------
spaces   asterisks   spaces
  0          7         0
  1          5         1
  2          3         2
  3          1         3
----------------------------
5. Find a logic to print spaces, asterisks and spaces.
*/