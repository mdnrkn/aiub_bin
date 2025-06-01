using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Final_Term_Problem_Sheet.Scenario2
{
    public class Student
    {
        private int studentId;
        private string name;
        private LibraryCard libraryCard;

        public int StudentId
        {
            get { return this.studentId; }
            set { this.studentId = value; }
        }

        public string Name
        {
            get { return this.name; }
            set { this.name = value; }
        }

        public LibraryCard LibraryCard
        {
            get { return this.libraryCard; }
            set { this.libraryCard = value; }
        }

        public Student()
        {

        }

        public Student(int studentId, string name, LibraryCard libraryCard)
        {
            this.studentId = studentId;
            this.name = name;
            this.libraryCard = libraryCard;
        }

        public void ActivateLibraryCard()
        {
            this.libraryCard.IsActive = true;
        }

        public void ShowDetails()
        {
            Console.WriteLine("Student ID: " + this.studentId);
            Console.WriteLine("Name: " + this.name);
            Console.WriteLine("Library Card Info:");
            this.libraryCard.ShowDetails();
        }
    }
}
