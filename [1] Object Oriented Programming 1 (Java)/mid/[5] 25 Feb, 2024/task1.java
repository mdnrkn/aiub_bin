import java.util.Scanner;

public class task1 {
    public static void main(String[] args){
			Scanner input = new Scanner(System.in);

			System.out.println("Enter a string : ");
			String str = input.nextLine();
			
			System.out.println("Enter index number : ");
			int indx = input.nextInt();
			
			char ch = str.charAt(indx);
			
			System.out.println("Character : "+ch);
			
	}
}
