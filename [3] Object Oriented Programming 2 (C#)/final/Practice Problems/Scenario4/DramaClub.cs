using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Final_Term_Problem_Sheet.Scenario4
{
    public class DramaClub : IActivity
    {
        private string playTitle;
        private string role;

        public string PlayTitle
        {
            get { return this.playTitle; }
            set { this.playTitle = value; }
        }

        public string Role
        {
            get { return this.role; }
            set { this.role = value; }
        }

        public DramaClub()
        {

        }

        public DramaClub(string playTitle, string role)
        {
            this.playTitle = playTitle;
            this.role = role;
        }

        public void ShowDetails()
        {
            Console.WriteLine("Play Title: " + this.playTitle);
            Console.WriteLine("Role: " + this.role);
        }

        public void Participate()
        {
            Console.WriteLine("Acting as " + this.role + " in " + this.playTitle + ".");
        }
    }
}
