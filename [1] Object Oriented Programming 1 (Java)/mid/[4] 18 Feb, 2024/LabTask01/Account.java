public class Account {
    private int accountNumber;
    private String accountHolderName;
    private double balance;

    public Account() {}

    public Account(int accountNumber, String accountHolderName, double balance) {
        this.accountNumber = accountNumber;
        this.accountHolderName = accountHolderName;
        this.balance = balance;
    }

    public void setAccountNumber(int an) {
        this.accountNumber = an;
    }

    public int getAccountNumber() {
        return accountNumber;
    }

    public void setAccountHolderName(String ahn) {
        this.accountHolderName = ahn;
    }

    public String getAccountHolderName() {
        return accountHolderName;
    }

    public void setBalance(double b) {
        this.balance = b;
    }

    public double getBalance() {
        return balance;
    }

    public void showDetails() {
        System.out.println("Account Holder Name: " + getAccountHolderName());
        System.out.println("Account Number: " + getAccountNumber());
        System.out.println("Account Balance: " + getBalance());
    }
}