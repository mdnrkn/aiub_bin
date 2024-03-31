import java.util.Scanner;

public class task7 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter two numbers : ");
        double a = input.nextDouble();
        double b = input.nextDouble();
        System.out.println("Enter an operator (+ - * /) : ");
        String op = input.next();

        switch (op) {
            case "+":
                System.out.println("Summation : "+(a+b));                
                break;
            case "-":
                System.out.println("Subtraction : "+(a-b));                
                break;
            case "*":
                System.out.println("Multiply : "+(a*b));                
                break;
            case "/":
                System.out.println("Division : "+(a/b));                
                break;
        
            default:
                System.out.println("Enter a valid operator.");;
        }
    }
}
