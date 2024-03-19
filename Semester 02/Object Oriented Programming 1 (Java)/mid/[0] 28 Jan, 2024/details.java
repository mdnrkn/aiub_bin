import java.util.Scanner;

public class details {

   public static void main(String []args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter your name : "); 
		String name = input.nextLine();
		
		System.out.println("Enter your university name : "); 
		String uni = input.nextLine();
		
		System.out.println("Enter your department name : "); 
		String department = input.nextLine();

		System.out.println("Enter your current semester : "); 
		String semester = input.nextLine();		
		
		System.out.println("Enter your cgpa name : "); 
		double cgpa = input.nextDouble();
		
		System.out.println("Your name : "+name);
		System.out.println("Your university name : "+uni);
		System.out.println("Your department name : "+department);
		System.out.println("Your current semester : "+semester);
		System.out.println("Your cgpa : "+cgpa);
   }
}