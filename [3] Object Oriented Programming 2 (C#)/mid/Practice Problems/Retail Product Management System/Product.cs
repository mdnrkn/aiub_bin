using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Retail_Product_Management_System
{
    public class Product
    {
        protected int productId;
        protected string name;
        protected double price;
        protected static double vatRate = 0.1;

        public int ProductId
        {
            get { return this.productId; }
            set { this.productId = value; }
        }

        public string Name
        {
            get { return this.name; }
            set { this.name = value; }
        }

        public double Price
        {
            get { return this.price; }
            set { this.price = value; }
        }

        public static double VatRate
        {
            get { return vatRate; }
            set { vatRate = value; }
        }

        public Product()
        {

        }

        public Product(int productId, string name, double price)
        {
            this.productId = productId;
            this.name = name;
            this.price = price;
        }

        public virtual void ShowDetails()
        {
            Console.WriteLine("Product Id: " + this.productId);
            Console.WriteLine("Name: " + this.name);
            Console.WriteLine("Price: " + this.price);
            Console.WriteLine("Vat Rate: " + vatRate);
        }
    }
}