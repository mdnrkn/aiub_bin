using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Final_Term_Problem_Sheet.Scenario5
{
    public abstract class Report : IPrintable
    {
        private string reportTitle;
        private DateTime createdDate;

        public string ReportTitle
        {
            get { return this.reportTitle; }
            set { this.reportTitle = value; }
        }

        public DateTime CreatedDate
        {
            get { return this.createdDate; }
            set { this.createdDate = value; }
        }

        public Report()
        {

        }

        public Report(string reportTitle, DateTime createdDate)
        {
            this.reportTitle = reportTitle;
            this.createdDate = createdDate;
        }

        public abstract string GenerateContent();
        public abstract void PrintReport();

        public void ShowDetails()
        {
            Console.WriteLine("Report Title: " + this.reportTitle);
            Console.WriteLine("Created Date: " + this.createdDate);
        }
    }
}
