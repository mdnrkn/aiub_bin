#include <iostream>
#include <cstring>
using namespace std;

struct Person
{
    char Name[30];
    Person* Child;
};

int main()
{
    Person P, * C;
    strcpy(P.Name, "Arif");

    C = P.Child = new Person[2];

    strcpy(C[0].Name, "Sara");
    C[0].Child = NULL;

    strcpy(C[1].Name, "Rahim");
    C = C[1].Child = new Person;

    strcpy(C->Name, "Karim");
    C->Child = NULL;

    cout << P.Name << endl;
    cout << P.Child[0].Name << endl;
    cout << P.Child[1].Name << endl;
    cout << P.Child[1].Child->Name << endl;

    return 0;
}