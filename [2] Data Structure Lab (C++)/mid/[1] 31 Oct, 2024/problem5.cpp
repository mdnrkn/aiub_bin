// Write a function to calculate factorial of a given integer number if that number is a prime number. 
// If it is not, it will give an error.

// For example,
// Scenario 1
// Input: 5
// Output: 120

// Scenario 2
// Input: 4
// Output: Error! Not a prime number.

#include <iostream>
using namespace std;

void check(int n)
{
    bool isPrime = false;

    if (n < 2) isPrime = false;
    else
    {
        int cnt = 0;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0) cnt++;
        }
        if (cnt == 0) isPrime = true;
    }

    if (isPrime)
    {
        long long int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        cout << "Factorial : " << fact << endl;
    }

    else cout << "Error! Not a prime number." << endl;

}

int main()
{
    int n;
    cin >> n;
    check(n);
}