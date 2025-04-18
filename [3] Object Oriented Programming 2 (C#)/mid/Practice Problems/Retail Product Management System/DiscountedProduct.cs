using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Retail_Product_Management_System
{
    public class DiscountedProduct : Product
    {
        private double discountPercent;
        private string category;

        public double DiscountPercent
        {
            get { return this.discountPercent; }
            set { this.discountPercent = value; }
        }

        public string Category
        {
            get { return this.category; }
            set { this.category = value; }
        }

        public DiscountedProduct() : base()
        {

        }

        public DiscountedProduct(int productId, string name, double price, double discountPercent, string category) : base(productId, name, price)
        {
            this.discountPercent = discountPercent;
            this.category = category;
        }

        public override void ShowDetails()
        {
            base.ShowDetails();
            Console.WriteLine("Discount Percent: " +this.discountPercent + "%");
            Console.WriteLine("Category: " +this.category);
        }

        public double GetFinalPrice()
        {
            double discount = this.price * (this.discountPercent / 100.0);
            double priceAfterDiscount = this.price - discount;
            double vat = priceAfterDiscount * vatRate;
            return priceAfterDiscount + vat;
        }

        public bool HasSeasonalOffer()
        {
            if (this.category == "Festival" || this.category == "Winter")
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