/*
Problem Statement :
Write a C++ program that takes a number from the user and prints first inputted number of Fibonacci
numbers from Fibonacci series.

Sample:
Input = 9
Output = First 9 Fibonacci numbers are: 0 1 1 2 3 5 8 13 21
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int n1 = 0, n2 = 1, n3;

    cout << "First " << n << " Fibonacci numbers are : " << n1 << " " << n2 << " ";

    for (int i = 2; i < n; i++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }

    return 0;
}

/*
Solution approach :
1. Take input from the user.
2. As we need to print a Fibonacci series, firstly we initialize and print 2 variables with number zero and one.
3. After that, we run a loop to n times.
4. Inside the loop, our 3rd number will be the summation of previous two numbers.
5. Then we have to print the 3rd number and reset the previous and present number for the next iiteration.
6. Finally, the Fibonacci series will be printed.
*/