using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Final_Term_Problem_Sheet.Scenario1
{
    public class Student
    {
        private int studentId;
        private string name;
        private List<Assignment> assignments;

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

        public List<Assignment> Assignments
        {
            get { return this.assignments; }
            set { this.assignments = value; }
        }

        public Student()
        { 
        
        }

        public Student(int studentId, string name, List<Assignment> assignments = null)
        {
            this.studentId = studentId;
            this.name = name;
            this.assignments = new List<Assignment>();
        }

        public List<Assignment> GetPendingAssignments()
        {
            List<Assignment> pending = new List<Assignment>();
            foreach (var assignment in assignments)
            {
                if (assignment.DueDate > DateTime.Now)
                {
                    pending.Add(assignment);
                }
            }
            return pending;
        }

        public void ShowDetails()
        {
            Console.WriteLine("Student ID: " + this.studentId);
            Console.WriteLine("Name: " + this.name);
            Console.WriteLine("Total Assignments: " + this.assignments.Count);
        }
    }
}
