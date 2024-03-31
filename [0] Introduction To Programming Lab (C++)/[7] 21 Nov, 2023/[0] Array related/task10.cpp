/*
Build  a  program  that  takes  five  positive  integer  numbers  using  an  array  to  check  whether  each
number present in the array is a prime number or not a prime number.
*/

#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
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