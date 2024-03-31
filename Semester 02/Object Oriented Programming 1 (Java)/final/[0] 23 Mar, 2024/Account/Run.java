public class Run {
    public static void main(String[] args) {
        Account acc1 = new Account("Joy", "ACC1234", 1000);
        Account acc2 = new Account("Hasan", "ACC5678", 2000);

        acc1.deposit(500);
        acc2.withdraw(300);
        acc1.transfer(200, acc2);

        System.out.println("===== Account 1 Transactions =====");
        acc1.showAllTransactions();

        System.out.println("===== Account 2 Transactions =====");
        acc2.showAllTransactions();
    }
}