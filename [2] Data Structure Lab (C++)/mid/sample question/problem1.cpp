// Create an appropriate Data Structure to store Student info (Name, ID, Completed_Course, CGPA). 
// Write code to find the highest CGPA from 5 students' information. Print all information of that students. 

#include <iostream>
using namespace std;

struct Student
{
    string name;
    int id;
    int completed_course;
    float cgpa;
};

int main()
{
    Student students[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> students[i].name
            >> students[i].id
            >> students[i].completed_course
            >> students[i].cgpa;
    }

    float max_cgpa = students[0].cgpa;
    for (int i = 1; i < 5; i++)
    {
        if (students[i].cgpa > max_cgpa)
        {
            max_cgpa = students[i].cgpa;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (students[i].cgpa == max_cgpa)
        {
            cout << "Name: " << students[i].name << endl;
            cout << "Id: " << students[i].id << endl;
            cout << "Completed Course: " << students[i].completed_course << endl;
            cout << "Cgpa: " << students[i].cgpa << endl;
        }
    }

    return 0;
}