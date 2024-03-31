public class Run {
    public static void main(String[] args) {
        Mobile M1 = new Mobile("Hasan", "01923456789", 120, "Android", false);
        M1.showInfo();
        M1.recharge(50);
        M1.callSomeone(10);
        M1.showInfo();
    }
}