import java.util.Scanner;

public class task6 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter 5 integer numbers : ");
        int i = 5, sum = 0;
        while (i > 0) {
            int num = input.nextInt();
            sum += num;
			i = i - 1;
        }

        sum /= 5;

        System.out.println("Average of 5 integer numbers : "+sum);
    }
}
