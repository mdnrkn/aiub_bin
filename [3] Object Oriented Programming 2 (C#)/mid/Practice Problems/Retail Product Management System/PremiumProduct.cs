using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Retail_Product_Management_System
{
    public class PremiumProduct : Product
    {
        private int warrantyYears;
        private string countryOfOrigin;

        public int WarrantyYears
        {
            get { return this.warrantyYears; }
            set { this.warrantyYears = value; }
        }

        public string CountryOfOrigin
        {
            get { return this.countryOfOrigin; }
            set { this.countryOfOrigin = value; }
        }

        public PremiumProduct() : base()
        {

        }

        public PremiumProduct(int productId, string name, double price, int warrantyYears, string countryOfOrigin) : base(productId, name, price)
        {
            this.warrantyYears = warrantyYears;
            this.countryOfOrigin = countryOfOrigin;
        }

        public override void ShowDetails()
        {
            base.ShowDetails();
            Console.WriteLine("Warranty Years: " + this.warrantyYears);
            Console.WriteLine("Country Of Origin: " + this.countryOfOrigin);
        }

        public bool IsEligibleForVIPReturn()
        {
            if(warrantyYears >= 2)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public string ShowWarrantyInfo()
        {
            return $"Warrenty: {this.WarrantyYears} years";
        }
        public string ShowWarrantyInfo(string note)
        {
            return $"Warrenty: {this.WarrantyYears} years {note}";
        }
    }
}