// Create a Person (Name, Child). Find out if the person has grandchild or not. 
// If he/she has grandchildren, print the names of the grandchild otherwise print no grandchild.

#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string name;
    Person* child;
};

int main()
{
    Person person;
    person.name = "Grandparent";

    person.child = new Person;
    person.child -> name = "Parent";

    person.child -> child = new Person;
    person.child -> child -> name = "Child";

    // person.child -> child -> child = NULL;
    
    person.child -> child -> child = new Person;
    person.child -> child -> child -> name = "Grandchild";


    if (person.child != NULL && person.child -> child != NULL && person.child -> child -> child != NULL)
    {
        cout << "Grandchild's Name: " << person.child -> child -> child -> name << endl;
    }
    else
    {
        cout << "No grandchild" << endl;
    }

    delete person.child -> child -> child;
    delete person.child -> child;
    delete person.child;

    return 0;
}

