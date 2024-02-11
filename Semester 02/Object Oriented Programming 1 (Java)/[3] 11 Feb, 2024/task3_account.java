public class task3_account {

    private String accName;
    private String acId;
    private int balance;

    // accName
    public void setAccName(String accName) {
        this.accName = accName;
    }
    public String getAccName() {
        return accName;
    }

    // accId
    public void setAcId(String acId) {
        this.acId = acId;
    }
    public String getAcId() {
        return acId;
    }

    // Balance
    public void setBalance(int balance) {
        this.balance = balance;
    }
    public int getBalance() {
        return balance;
    }
	
    // deposit
    public void deposit(int amount) {
        if (amount > 0) {
            balance += amount; 
            System.out.println("Deposit successful. New Balance: "+ balance);
        } 
        else {
            System.out.println("Invalid deposit amount.");
        }
    }
    
	// withdraw
    public void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount; 
            System.out.println("Withdrawal successful. New Balance: " + balance);
        } 
        else {
            System.out.println("Invalid withdrawal.");
        }
    }
}
