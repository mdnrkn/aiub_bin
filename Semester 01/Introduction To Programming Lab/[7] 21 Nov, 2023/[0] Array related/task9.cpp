/*
Build a program that takes a word or a number which has more than one element as input from the
user using a character array. Afterwards, the program checks whether the input is palindrome or
not palindrome.
*/

#include <iostream>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1;

    if (str1.size() > 1)
    {
        for (int i = str1.size() - 1; i >= 0; i--)
        {
            str2 += str1[i];
        }

        if (str1 == str2)
            cout << "It's a palindrome.";
        else
            cout << "It's not a palindrome.";
    }
    else
        cout << "Input more than one element.";

    return 0;
}
