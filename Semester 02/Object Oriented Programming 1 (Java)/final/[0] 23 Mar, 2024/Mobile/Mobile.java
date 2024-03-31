// 4
public class Mobile {
    private String mobileOwnerName;
    private String mobileNumber;
    private int mobileBalance;
    private String mobileOSName;
    private boolean lock;

    Mobile() {}

    Mobile(String mobileOwnerName, String mobileNumber, int mobileBalance, String mobileOSName, boolean lock) {
        this.mobileOwnerName = mobileOwnerName;
        this.mobileNumber = mobileNumber;
        this.mobileBalance = mobileBalance;
        this.mobileOSName = mobileOSName;
        this.lock = lock;
    }

    public void showInfo() {
        if (!lock) {
            System.out.println("========= Information ==========");
            System.out.println("Owner Name : " + this.mobileOwnerName);
            System.out.println("Number : " + this.mobileNumber);
            System.out.println("Mobile OS : " + this.mobileOSName);
            System.out.println("Balance : " + this.mobileBalance);
            System.out.println("Lock Status :" + this.lock);
            System.out.println("================================");
        } else
            System.out.println("Unlock the mobile to show Info.");
    }

    public void recharge(int amount) {
        if (!lock) {
            this.mobileBalance += amount;
        } else
            System.out.println("Unlock the mobile to Recharge.");
    }

    public void callSomeone(int timeDuration) {
        if (!lock) {
            this.mobileBalance -= timeDuration;
        } else
            System.out.println("Unlock the mobile to Call Someone.");
    }
}