import java.util.Scanner;

public class task1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
       		
		System.out.println("Enter your score : "); 
		int num = input.nextInt();

        if (num >= 0 && num <= 100) {
            if (num < 50) {
                System.out.println("You got F");
            }
            else if (num >= 50 && num < 60) {
                System.out.println("You got D");
            }
            else if (num >= 60 && num < 70) {
                System.out.println("You got C");
            }
            else if (num >= 70 && num < 80) {
                System.out.println("You got B");
            }
            else if (num >= 80 && num < 90) {
                System.out.println("You got A");
            }
            else {
                System.out.println("You got A+");
            }
        }
        else
        {
            System.out.println("Enter a valid score between 0-100");
        }
        
    }
}
