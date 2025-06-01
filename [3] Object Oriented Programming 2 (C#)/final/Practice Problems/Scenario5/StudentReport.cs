using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Final_Term_Problem_Sheet.Scenario5
{
    public class StudentReport : Report
    {
        private string studentName;
        private double averageScore;

        public string StudentName
        {
            get { return this.studentName; }
            set { this.studentName = value; }
        }

        public double AverageScore
        {
            get { return this.averageScore; }
            set { this.averageScore = value; }
        }

        public StudentReport() : base()
        {

        }

        public StudentReport(string reportTitle, DateTime createdDate, string studentName, double averageScore)
            : base(reportTitle, createdDate)
        {
            this.studentName = studentName;
            this.averageScore = averageScore;
        }

        public override string GenerateContent()
        {
            return "Student: " + this.studentName + ", Average Score: " + this.averageScore;
        }

        public override void PrintReport()
        {
            Console.WriteLine("Title: " + ReportTitle);
            Console.WriteLine("Date: " + CreatedDate);
            Console.WriteLine("Content: " + GenerateContent());
        }

        public void ShowDetails()
        {
            base.ShowDetails();
            Console.WriteLine("Student Name: " + this.studentName);
            Console.WriteLine("Average Score: " + this.averageScore);
        }
    }
}
