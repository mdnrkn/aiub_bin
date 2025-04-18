using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bank_Account_Management_System
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Bank Account:");
            BankAccount b1 = new BankAccount();
            b1.AccountNumber = 1;
            b1.HolderName = "Bank Account Holder 1";
            b1.Balance = 20000.0;
            b1.ShowDetails();
            Console.WriteLine($"Total Accounts: {BankAccount.TotalAccounts()}");
            Console.WriteLine();

            BankAccount b2 = new BankAccount(2, "Bank Account Holder 2", 1000.0);
            b2.ShowDetails();
            Console.WriteLine($"Total Accounts: {BankAccount.TotalAccounts()}");
            Console.WriteLine();

            Console.WriteLine("Savings Account :");
            SavingAccount s1 = new SavingAccount();
            s1.AccountNumber = 3;
            s1.HolderName = "Saving Account Holder 1";
            s1.Balance = 30000.0;
            s1.InterestRate = 5.0;
            s1.MinimumBalance = 5000.0;
            s1.ShowDetails();
            Console.WriteLine($"Annual Interest: {s1.CalculateAnnualInterest()}");
            Console.WriteLine($"Penalty Applicable: {s1.IsPenaltyApplicable()}");
            Console.WriteLine($"Total Accounts: {BankAccount.TotalAccounts()}");
            Console.WriteLine();

            SavingAccount s2 = new SavingAccount(4, "Saving Account Holder 2", 1500.0, 10.0, 2000.0);
            s2.ShowDetails();
            Console.WriteLine($"Annual Interest: {s2.CalculateAnnualInterest()}");
            Console.WriteLine($"Penalty Applicable: {s2.IsPenaltyApplicable()}");
            Console.WriteLine($"Total Accounts: {BankAccount.TotalAccounts()}");
            Console.WriteLine();

            Console.WriteLine("Current Account :");
            CurrentAccount c1 = new CurrentAccount();
            c1.AccountNumber = 5;
            c1.HolderName = "Current Account Holder 1";
            c1.Balance = 15000.0;
            c1.OverdraftLimit = 5000.0;
            c1.TransactionFee = 10.0;
            c1.ShowDetails();
            Console.WriteLine($"Can Withdraw $10000: {c1.CanWithdraw(10000)}");
            Console.WriteLine($"Can Withdraw $21000: {c1.CanWithdraw(21000)}");
            Console.WriteLine($"Can Withdraw $10000 with fee: {c1.CanWithdraw(10000, c1.TransactionFee)}");
            Console.WriteLine($"Total Accounts: {BankAccount.TotalAccounts()}");
            Console.WriteLine();

            CurrentAccount c2 = new CurrentAccount(6, "Current Account Holder 2", 5000.0, 10000.0, 15.0);
            c2.ShowDetails();
            Console.WriteLine($"Can Withdraw $15000: {c2.CanWithdraw(15000)}");
            Console.WriteLine($"Can Withdraw $15000 with fee: {c2.CanWithdraw(15000, c2.TransactionFee)}");
            Console.WriteLine($"Total Accounts: {BankAccount.TotalAccounts()}");
        }
    }
}