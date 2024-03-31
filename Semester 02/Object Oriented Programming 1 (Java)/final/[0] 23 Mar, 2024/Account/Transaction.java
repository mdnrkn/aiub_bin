public class Transaction {
    private Account sender;
    private Account receiver;
    private int amount;
    private String additionalInfo;

    public Transaction() {
    }

    public Transaction(Account sender, Account receiver, int amount, String additionalInfo) {
        this.sender = sender;
        this.receiver = receiver;
        this.amount = amount;
        this.additionalInfo = additionalInfo;
    }

    public void showInfo() {
        String senderName;
        String receiverName;

        if (sender != null) {
            senderName = sender.getAccName();
        } 
		else {
            senderName = "Null";
        }

        if (receiver != null) {
            receiverName = receiver.getAccName();
        } 
		else {
            receiverName = "Null";
        }

        System.out.println("Sender: " + senderName);
        System.out.println("Receiver: " + receiverName);
        System.out.println("Amount: " + amount);
        System.out.println("Info: " + additionalInfo);
    }
}