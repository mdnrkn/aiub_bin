import java.util.Scanner;
public class task2 {
    public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter 1st string : ");
		String str1 = input.nextLine();
		
		System.out.println("Enter 2nd string : ");
		String str2 = input.nextLine();
		
		System.out.println("Comparison of two strings : " + str1.equals(str2));
	}
}
