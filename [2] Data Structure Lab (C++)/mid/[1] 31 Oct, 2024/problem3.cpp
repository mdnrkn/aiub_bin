// Write a function that takes TWO parameters to print all the odd numbers between a given range. 
// Input the starting value of the range and ending value of the range. Then, send them as the parameters to your function.

// For example,
// Output:
// Starting value: 12
// Ending value: 23
// 13 15 17 19 21 23

#include <iostream>
using namespace std;

void printOdd(int start, int end)
{
    cout << "Starting value : " << start << endl;
    cout << "Ending value : " << end << endl;

    for (int i = start; i <= end; i++)
    {
        if (i % 2) cout << i << " ";
    }

}

int main()
{
    int start, end;
    cin >> start >> end;
    
    printOdd(start, end);

    return 0;
}