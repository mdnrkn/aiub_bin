using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Final_Term_Problem_Sheet.Scenario3
{
    public abstract class Payment : IPayable
    {
        private double amount;
        private string transactionId;

        public double Amount
        {
            get { return this.amount; }
            set { this.amount = value; }
        }

        public string TransactionId
        {
            get { return this.transactionId; }
            set { this.transactionId = value; }
        }

        public Payment()
        {

        }

        public Payment(double amount, string transactionId)
        {
            this.amount = amount;
            this.transactionId = transactionId;
        }

        public abstract bool Validate();
        public abstract bool ProcessPayment(double amount);
    }
}
