import java.util.Scanner;

public class task4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the value : ");
        int value = input.nextInt();

        int year = value / 365; 
        value = value % 365;

        int month = value / 30; 
        value = value % 30; 

        int day = value; 
        
        System.out.println("Year : "+year);
        System.out.println("Month : "+month);
        System.out.println("Day : "+day);
        
    }
}
