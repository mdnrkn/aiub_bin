﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bank_Account_Management_System
{
    public class CurrentAccount : BankAccount
    {
        private double overdraftLimit;
        private double transactionFee;

        public double OverdraftLimit
        {
            get { return this.overdraftLimit; }
            set { this.overdraftLimit = value; }
        }

        public double TransactionFee
        {
            get { return this.transactionFee; }
            set { this.transactionFee = value; }
        }

        public CurrentAccount() : base()
        {

        }

        public CurrentAccount(int accountNumber, string holderName, double balance, double overdraftLimit, double transactionFee) : base(accountNumber, holderName, balance)
        {
            this.overdraftLimit = overdraftLimit;
            this.transactionFee = transactionFee;
        }

        public override void ShowDetails()
        {
            base.ShowDetails();
            Console.WriteLine("Overdraft Limit: " + this.overdraftLimit);
            Console.WriteLine("Transaction Fee: " + this.transactionFee);
        }

        public bool CanWithdraw(double amount)
        {
            if(amount <= this.balance + this.overdraftLimit)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public bool CanWithdraw(double amount, double fee)
        {
            if(amount <= this.balance - fee + this.overdraftLimit)
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