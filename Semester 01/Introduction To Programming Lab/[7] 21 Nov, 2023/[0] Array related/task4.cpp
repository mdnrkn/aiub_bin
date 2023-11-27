/*
Create an array to store five integer numbers by asking user for the inputs. Now, develop a program
that  checks  whether  each  number  present  in  the  array  is  an  even  number  or an  odd  number  and
replaces the even numbers with a ‘0’ and odd numbers with a ‘1’. Later, the program prints the
modified array.
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
        if (arr[i] % 2 == 0)
            arr[i] = 0;

        else
            arr[i] = 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}