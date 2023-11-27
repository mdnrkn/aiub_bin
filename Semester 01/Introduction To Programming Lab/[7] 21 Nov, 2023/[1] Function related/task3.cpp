// Prime number finding program using Function

#include <iostream>
using namespace std;
void prime(int num)
{

    bool check = true;

    if (num <= 1)
    {
        check = false;
    }
    else
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                check = false;
                break;
            }
        }
    }

    if (check)
    {
        cout << num << " : is a prime number." << endl;
    }
    else
    {
        cout << num << " : is not a prime number." << endl;
    }
}
int main()
{
    int num;
    cin >> num;
    prime(num);
    return 0;
}