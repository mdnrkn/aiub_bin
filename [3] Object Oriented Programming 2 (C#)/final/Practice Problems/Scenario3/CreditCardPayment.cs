using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Final_Term_Problem_Sheet.Scenario3
{
    public class CreditCardPayment : Payment
    {
        public override bool Validate()
        {
            if (Amount < 1000)
            {
                return false;
            }
            return true;
        }

        public override bool ProcessPayment(double amount)
        {
            if (Validate())
            {
                Console.WriteLine("Payment successful.");
                return true;
            }
            else
            {
                Console.WriteLine("Payment failed.");
                return false;
            }
        }
    }
}