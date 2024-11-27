// Write a code that will create custom cipher(encoded words) on strings.
// Follow this procedure:
// 1. Write a function named encode that takes two parameters, a string s, and an integer j.
// 2. Skip j number of characters in the string and increase the ASCII value of the next character by 2.
// 3. Perform step 3 throughout the string.
// 4. Return the converted string from encode function.

#include <iostream>
using namespace std;

string encode(string s, int j)
{
    for (int i = j; i < s.length(); i = i + j + 1)
    {
        s[i] += 2;
    }
    return s;
}

int main()
{
    string s = "I am a student";
    int j;
    cin >> j;
    cout << encode(s, j);
    return 0;
}