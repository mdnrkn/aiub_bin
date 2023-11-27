/*
Develop  a  program  that  has  an  array  which  can  store  integer  numbers  as  well  as  floating  point
numbers and the program checks each element of the array whether the number is an integer number
or a floating-point number.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "How many numbers : ";
    cin >> n;
    cout << endl;

    float arr[n];
    cout << "Enter the numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == floor(arr[i]))
            cout << arr[i] << " : it's an integer number." << endl;
        else
            cout << arr[i] << " : it's a float number." << endl;
    }

    return 0;
}
