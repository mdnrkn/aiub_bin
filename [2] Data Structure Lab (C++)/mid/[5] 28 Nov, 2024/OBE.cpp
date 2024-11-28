// Lab Final

#include <iostream>
using namespace std;

struct Student
{
    string StudentID;
    string Name;
    float CGPA;
    int CompletedCredit;
};

int main()
{
    Student students[3];

    students[0].StudentID = "24-2317-2";
    students[0].Name = "Rafiq";
    students[0].CGPA = 3.59;
    students[0].CompletedCredit = 30;

    students[1] = { "24-2527-1", "Lia", 3.82, 40 };
    students[2] = { "23-2627-3", "Siam", 3.92, 70 };

    for (int i = 0; i < 3; i++)
    {
        if (students[i].CGPA > 3.75)
        {
            cout << "Student Information:" << endl;
            cout << "ID: " << students[i].StudentID << endl;
            cout << "Name: " << students[i].Name << endl;
            cout << "CGPA: " << students[i].CGPA << endl;
            cout << "Completed Credit: " << students[i].CompletedCredit << endl << endl;
        }
    }

    return 0;

}