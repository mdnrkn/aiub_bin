/*
Problem Statement :
Write a C++ program that takes 5 integer values as inputs from the user using for loop and prints the average of five inputs.
*/

#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        sum = sum + n;
    }

    float avg = sum / 5;

    cout << "The average of five numbers : " << avg;

    return 0;
}

/*
Solution approach :
1. Firstly, initialize a sum variable with zero.
2. As 5 integer values need to take as input from the user using for loop, so run a loop for 5 times to take input.
3. Each time a user inputs a number, the number will be added to the sum variable.
4. Finally, calculate the average of five numbers and print it.
*/