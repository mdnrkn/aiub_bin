/*
Problem Statement :
Write a C++ program that takes an integer variable, Z and computes the result of 𝑍^5 + 𝑍^7 + 𝑍^9 + 𝑍^4 − 𝑍^3 ∗ 𝑍^2. 
Do not use any built-in function.
*/

#include <iostream>
using namespace std;
int main()
{
    int z;
    cin >> z;

    long long int z2, z3, z4, z5, z7, z9;

    z2 = z * z;
    z3 = z2 * z;
    z4 = z2 * z2;
    z5 = z4 * z;
    z7 = z5 * z2;
    z9 = z7 * z2;

    long long int result = z5 + z7 + z9 + z4 - z3 * z2;

    cout << "The result is : " << result << endl;

    return 0;
}

/*
Solution approach :
1. Take input from the user.
2. According to the problem statement, we cannot use any built-in function.
3. There is an expression given, and that is => z^5 + z^7 + z^9 + z^4 − z^3 ∗ z^2
4. To calculate z^2, we need to multiply z by z.
   To calculate z^3, we need to multiply z^2 by z,
   and so on for z^4, z^5, and so on.
5. We declare the variables in "long long int" datatype.
6. Because z^9 will be a large number and it might be exceed the limit of int.
7. So, to find the accurate value we use long long int.
8. Finally, print the result.
*/