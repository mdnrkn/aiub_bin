using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bank_Account_Management_System
{
    public class BankAccount
    {
        protected int accountNumber;
        protected string holderName;
        protected double balance;
        protected static int totalAccounts = 0;

        public int AccountNumber
        {
            get { return this.accountNumber; }
            set { this.accountNumber = value; }
        }

        public string HolderName
        {
            get { return this.holderName; }
            set { this.holderName = value; }
        }

        public double Balance
        {
            get { return this.balance; }
            set { this.balance = value; }
        }

        public static int TotalAccounts()
        {
            return totalAccounts;
        }

        public BankAccount()
        {
            totalAccounts++;
        }

        public BankAccount(int accountNumber, string holderName, double balance)
        {
            this.accountNumber = accountNumber;
            this.holderName = holderName;
            this.balance = balance;
            totalAccounts++;
        }

        public virtual void ShowDetails()
        {
            Console.WriteLine("Account Information:");
            Console.WriteLine("Account Number: " + this.accountNumber);
            Console.WriteLine("Holder Name: " + this.holderName);
            Console.WriteLine("Balance: " + this.balance);
            Console.WriteLine("Total Accounts: " + totalAccounts);
        }
    }
}