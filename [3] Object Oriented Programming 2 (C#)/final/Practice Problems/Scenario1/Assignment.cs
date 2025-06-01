using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Final_Term_Problem_Sheet.Scenario1
{
    public class Assignment
    {
        private string title;
        private DateTime dueDate;
        private double score;

        public string Title
        {
            get { return this.title; }
            set { this.title = value; }
        }

        public DateTime DueDate
        {
            get { return this.dueDate; }
            set { this.dueDate = value; }
        }

        public double Score
        {
            get { return this.score; }
            set { this.score = value; }
        }

        public Assignment()
        {
        
        }

        public Assignment(string title, DateTime dueDate, double score)
        {
            this.title = title;
            this.dueDate = dueDate;
            this.score = score;
        }

        public void ShowDetails()
        { 
            Console.WriteLine("Title: " + this.title);
            Console.WriteLine("Due Date: " + this.dueDate);
            Console.WriteLine("Score: " + this.score);
        }
    }
}
