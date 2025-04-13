using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bank_Account_Management_System
{
    public class SavingAccount:BankAccount
    {
        private double interestRate;
        private double minimumBalance;

        public SavingAccount(): base()
        {

        }

        public SavingAccount(int accountNumber, string holderName, double balance, double interestRate, double minimumBalance): base(accountNumber, holderName, balance)
        {
            this.interestRate = interestRate;
            this.minimumBalance = minimumBalance;
        }

        public double InterestRate
        {
            get { return this.interestRate; }
            set { this.interestRate = value; }
        }

        public double MinimumBalance
        {
            get { return this.minimumBalance; }
            set { this.minimumBalance = value; }
        }

        public void ShowDetails()
        {
            base.ShowDetails();
            Console.WriteLine("Interest Rate: " + this.interestRate);
            Console.WriteLine("Minimum Balance: " + this.minimumBalance);
        }

        public double CalculateAnnualInterest()
        {
            return this.balance * interestRate;
        }

        public bool IsPenaltyApplicable()
        {
            if(this.balance < this.minimumBalance)
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
