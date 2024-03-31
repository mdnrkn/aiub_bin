/*
Build a program that stores a word “Bangladeshi” using a character array and makes a full pyramid
from the inputted word.
Sample:
          B
        B A N
      B A N G L
    B A N G L A D
  B A N G L A D E S
B A N G L A D E S H I
*/

#include <iostream>
using namespace std;
int main()
{
    string str = "BANGLADESHI";
    for (int i = 0; i < 6; i++)
    {
        // space
        for (int j = 0; j < 5 - i; j++)
        {
            cout << " ";
        }

        // character
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << str[j];
        }
        cout << endl;
    }

    return 0;
}