public class Account {
    private String accName;
    private String accId;
    private int balance;
    private Transaction[] transactions;
    private int transactionCount;

    public Account(){}

    public Account(String accName, String accId, int initialBalance) {
        this.accName = accName;
        this.accId = accId;
        this.balance = initialBalance;
        this.transactions = new Transaction[100];
        this.transactionCount = 0;
    }

    public void deposit(int amount) {
        balance += amount;
        addTransaction(this, null, amount, "Deposit");
    }

    public void withdraw(int amount) {
        balance -= amount;
        addTransaction(this, null, -amount, "Withdrawal");
    }

    public void transfer(int amount, Account receiver) {
        this.withdraw(amount);
        receiver.deposit(amount);
        addTransaction(this, receiver, amount, "Transfer");
    }

    public void addTransaction(Account sender, Account receiver, int amount, String additionalInfo) {
        Transaction transaction = new Transaction(sender, receiver, amount, additionalInfo);
        transactions[transactionCount++] = transaction;
    }

    public void showAllTransactions() {
        for (int i = 0; i < transactionCount; i++) {
            transactions[i].showInfo();
        }
    }
	
    public String getAccName() {
        return accName;
    }

    public String getAccId() {
        return accId;
    }
}