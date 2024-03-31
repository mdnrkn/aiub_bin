/*
Develop a program that has a 2D array that can hold floating point numbers. The 2D array has 2
rows  and  four  columns.  The  program  finds  the  largest  element  from  the  first  row,  the  smallest
element from the second row, multiplies them and displays the largest element, smallest element
as well as the multiplied result.
*/

#include <iostream>
using namespace std;
int main()
{
    int r = 2, c = 4;
    float arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    float mx = arr[0][0], mn = arr[1][0];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 && mx < arr[i][j])
            {
                mx = arr[i][j];
            }
            if (i == 1 && mn > arr[i][j])
            {
                mn = arr[i][j];
            }
        }
    }

    float mlt = mx * mn;

    cout << "Largest element from the first row: " << mx << endl
         << "Smallest element from the second row: " << mn << endl
         << "Result of multiplication: " << mlt;

    return 0;
}
