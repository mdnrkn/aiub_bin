// Write a program with appropriate data structure to keep records of some students.
// Each student will have the following informations:
// 1. Unique ID (you can use integer for this)
// 2. Number of Credits Completed
// 3. CGPA

#include <iostream>
using namespace std;

struct student
{
    int id;
    int credit;
    float cgpa;
};

int main()
{
    int n = 2;
    student s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].id >> s[i].credit >> s[i].cgpa;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << " Information:" << endl;
        cout << "Id: " << s[i].id << endl;
        cout << "Credit: " << s[i].credit << endl;
        cout << "CGPA: " << s[i].cgpa << endl << endl;
    }

    return 0;
}