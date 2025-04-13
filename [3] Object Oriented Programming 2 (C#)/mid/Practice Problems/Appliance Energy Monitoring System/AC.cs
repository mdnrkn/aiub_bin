using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Appliance_Energy_Monitoring_System
{
    public class AC : Appliance
    {
        private int btu;
        private int starRating;

        public int Btu
        {
            get { return btu; }
            set { btu = value; }
        }

        public int StarRating
        {
            get { return starRating; }
            set { starRating = value; }
        }

        public AC() : base()
        {

        }

        public AC(string applianceName, string brand, int btu, int starRating) : base(applianceName, brand)
        {
            this.btu = btu;
            this.StarRating = starRating;
        }

        public void ShowDetails()
        {
            base.ShowDetails();
            Console.WriteLine($"Btu: " + this.btu);
            Console.WriteLine($"Star Rating: " + this.StarRating);
        }

        public double MonthlyElectricityCost(int hours)
        {
            return this.btu * hours * 0.05;
        }

        public double MonthlyElectricityCost(int hours, double unitCost)
        {
            double cost = this.btu * hours * unitCost;
            TotalEnergyUsed += cost;
            return cost;
        }

        public bool IsEcoFriendly()
        {
            if(StarRating >= 4)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
