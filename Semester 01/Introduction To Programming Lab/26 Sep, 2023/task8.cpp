/*
Problem Statement :
Write a C++ program for a photocopy shop. In that shop, the charge for one page photocopy
is 2.35 TAKA. Now ask the customer how many pages the user wants to photocopy, then
print the total amount. Afterwards, if the customer’s total cost is greater than 100 taka then
the customer will get 4% discount on his/her total cost.
*/

#include <iostream>
using namespace std;
int main()
{
    float perCost = 2.35;
    int numPage;
    cout << "How many pages you want to photocopy : " << endl;
    cin >> numPage;

    float totalCost = perCost * numPage;

    if (totalCost > 100)
    {
        float discount = totalCost - (totalCost * 0.04);
        cout << "Hey, you got a 4% discount !!" << endl
             << "Now you have to pay only : " << discount << " taka" << endl;
    }
    else
    {
        cout << "You have to pay : " << totalCost << " taka" << endl;
    }

    return 0;
}

/*
Solution approach :
1. Take input from the customer how many pages he wants to photocopy.
2. Calculate the total cost with the per page cost by the number of pages.
3. Check the total cost, whether it is greater than 100 taka or not.
4. If the total cost is over 100 taka, apply a 4% discount.
5. Finally, print a message with the update cost to the customer.
*/