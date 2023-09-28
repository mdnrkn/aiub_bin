/*
Problem Statement :
Write a C++ program that has two variables, Base and Height and it computes the area of a
triangle. Afterwards, it checks whether the area is an even number or an odd number.
*/

#include <iostream>
using namespace std;
int main()
{
    int b, h;
    cin >> b >> h;

    int area = 0.5 * b * h;

    if (area % 2 == 0)
    {
        cout << "The area is an even number." << endl;
    }
    else
    {
        cout << "The area is an odd number." << endl;
    }

    return 0;
}

/*
Solution approach :
1. Take input from the user.
2. Calculate the area of a triangle.
3. Check whether the area is an even number or an odd number.
*/