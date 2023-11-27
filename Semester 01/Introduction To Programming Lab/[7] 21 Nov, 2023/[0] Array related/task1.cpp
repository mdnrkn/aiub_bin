/*
Problem Statement :
Develop  a  program  that  stores  your  Name  and  ID  using  two  different  arrays  and  displays  your information at the end.
*/

#include <iostream>
using namespace std;
int main()
{
    string name, id;

    cout << "Enter name : ";
    getline(cin, name);
    
    cout << endl
         << "Enter id : ";
    getline(cin, id);

    cout << endl
         << name << endl
         << id;

    return 0;
}