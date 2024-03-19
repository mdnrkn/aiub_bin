import java.util.Scanner;

public class task3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter three values : ");
        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();

        if (a+b == c) {
            System.out.println("Triangle can be formed by the given values.");
        }
        else if (b+c == a) {
            System.out.println("Triangle can be formed by the given values.");
        }
        else if (a+c == b) {
            System.out.println("Triangle can be formed by the given values.");
        }
        else
        {
            System.out.println("Triangle can't be formed by the given values.");
        }
    }
}
