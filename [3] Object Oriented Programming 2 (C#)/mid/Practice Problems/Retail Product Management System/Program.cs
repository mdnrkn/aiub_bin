using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Retail_Product_Management_System
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Product :");
            Product p1 = new Product();
            p1.ProductId = 1;
            p1.Name = "First Product";
            p1.Price = 100.0;
            p1.ShowDetails();
            Console.WriteLine($"VAT Rate: {Product.VatRate()}");
            Console.WriteLine();

            Product p2 = new Product(2, "Second Product", 150.0);
            p2.ShowDetails();
            Console.WriteLine($"VAT Rate: {Product.VatRate()}");
            Console.WriteLine();

            Console.WriteLine("Discounted Product :");
            DiscountedProduct d1 = new DiscountedProduct();
            d1.ProductId = 3;
            d1.Name = "Festival Sale Item";
            d1.Price = 200.0;
            d1.DiscountPercent = 20.0;
            d1.Category = "Festival";
            d1.ShowDetails();
            Console.WriteLine($"Final Price: {d1.GetFinalPrice()}");
            Console.WriteLine($"Has Festival Offer: {d1.HasSeasonalOffer()}");
            Console.WriteLine();

            DiscountedProduct d2 = new DiscountedProduct(4, "Winter Sale Item", 300.0, 15.0, "Winter");
            d2.ShowDetails();
            Console.WriteLine($"Final Price: {d2.GetFinalPrice()}");
            Console.WriteLine($"Has Winter Offer: {d2.HasSeasonalOffer()}");
            Console.WriteLine();

            Console.WriteLine("Premium Product :");
            PremiumProduct pp1 = new PremiumProduct();
            pp1.ProductId = 5;
            pp1.Name = "Premium Item";
            pp1.Price = 500.0;
            pp1.WarrantyYears = 1;
            pp1.CountryOfOrigin = "Japan";
            pp1.ShowDetails();
            Console.WriteLine($"VIP Return Eligible: {pp1.IsEligibleForVIPReturn()}");
            Console.WriteLine(pp1.ShowWarrantyInfo());
            Console.WriteLine(pp1.ShowWarrantyInfo("(Standard Coverage)"));
            Console.WriteLine();

            PremiumProduct pp2 = new PremiumProduct(6, "Luxury Item", 1000.0, 3, "Germany");
            pp2.ShowDetails();
            Console.WriteLine($"VIP Return Eligible: {pp2.IsEligibleForVIPReturn()}");
            Console.WriteLine(pp2.ShowWarrantyInfo());
            Console.WriteLine(pp2.ShowWarrantyInfo("(Extended Coverage)"));

        }
    }
}
