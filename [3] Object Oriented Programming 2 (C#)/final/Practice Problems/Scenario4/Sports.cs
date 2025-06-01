using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Final_Term_Problem_Sheet.Scenario4
{
    public class Sports : IActivity
    {
        private string sportName;
        private int teamSize;

        public string SportName
        {
            get { return this.sportName; }
            set { this.sportName = value; }
        }

        public int TeamSize
        {
            get { return this.teamSize; }
            set { this.teamSize = value; }
        }

        public Sports()
        {
        }

        public Sports(string sportName, int teamSize)
        {
            this.sportName = sportName;
            this.teamSize = teamSize;
        }

        public void ShowDetails()
        {
            Console.WriteLine("Sport Name: " + this.sportName);
            Console.WriteLine("Team Size: " + this.teamSize);
        }

        public void Participate()
        {
            Console.WriteLine("Playing " + this.sportName + " in a team of " + this.teamSize + ".");
        }
    }
}
