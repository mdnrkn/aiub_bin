// Create an appropriate Data Structure to store Employee info (Name, ID, Salary, Join Date, Age). 
// Write code to find employees that have highest salary, and age is more than 40yr. Print all information of those employee. 

#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    string name;
    int id;
    int salary;
    string join_date;
    int age;
};

int main()
{
    Employee employees[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> employees[i].name
            >> employees[i].id
            >> employees[i].salary
            >> employees[i].join_date
            >> employees[i].age;
    }

    int max_salary = -1;
    bool found = false;

    for (int i = 0; i < 5; i++)
    {
        if (employees[i].salary > max_salary && employees[i].age > 40)
        {
            max_salary = employees[i].salary;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (employees[i].salary == max_salary && employees[i].age > 40)
        {
            cout << "Employee Details: " << endl;
            cout << "Name: " << employees[i].name << endl;
            cout << "ID: " << employees[i].id << endl;
            cout << "Salary: " << employees[i].salary << endl;
            cout << "Join Date: " << employees[i].join_date << endl;
            cout << "Age: " << employees[i].age << endl << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "No employees found with the highest salary and age > 40";
    }

    return 0;
}