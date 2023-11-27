/*
Develop a program that takes a word as input from the user using a character array and prints only
the vowels present in the inputted word.
*/

#include <iostream>
using namespace std;
int main()
{
    string word;
    cin >> word;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            cout << word[i] << " ";
        }
    }

    return 0;
}