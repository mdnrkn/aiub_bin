// Even-Odd finding program using Function

#include <iostream>
using namespace std;
void evenOdd(int num)
{
    if (num % 2 == 0)
        cout << num << " : It's an Even number.";
    else
        cout << num << " : It's an Odd number.";
}
int main()
{
    int num;
    cin >> num;
    evenOdd(num);
    return 0;
}