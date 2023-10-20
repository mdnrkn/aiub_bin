/*
Problem Statement :
Write a C++ program to find prime numbers using array.  .
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many numbers? : " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter the numbers : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool check = true;

        if (arr[i] <= 1)
        {
            check = false;
        }
        else
        {
            for (int j = 2; j * j <= arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    check = false;
                    break;
                }
            }
        }

        if (check)
        {
            cout << arr[i] << " : is a prime number." << endl;
        }
        else
        {
            cout << arr[i] << " : is not a prime number." << endl;
        }
    }

    return 0;
}

/*
Solution approach :
1. Take input from the user.
2. Run a loop and check whether the number is prime or not.
3. Print the prime or non-prime numbers with a message.
*/