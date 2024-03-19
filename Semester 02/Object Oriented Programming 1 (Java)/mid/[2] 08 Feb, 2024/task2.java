import java.util.Scanner;

public class task2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the quantity(kg) : ");
        double quantity = input.nextDouble();
        System.out.println("Enter the price per kg : ");
        double price = input.nextDouble();
        System.out.println("Enter the tax rate : ");
        double tax = input.nextDouble();

        double cost = quantity * price;
        System.out.println("Your cost : "+cost);

        double totalCost = cost + (cost * tax/100);
        System.out.println("And including the tax, your total cost : "+totalCost);
    }    
}
