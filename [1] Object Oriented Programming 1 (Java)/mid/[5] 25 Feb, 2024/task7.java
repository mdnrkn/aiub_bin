import java.util.Scanner;
public class task7 {
	public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter your number: ");
        String str = input.nextLine();

        if (str.charAt(2) == '7' || str.charAt(2) == '3') 
		{
            System.out.println(str + " - Grameenphone");
        } 
		else if (str.charAt(2) == '6') 
		{
            System.out.println(str + " - Airtel");
        } 
		else if (str.charAt(2) == '9' || str.charAt(2) == '4') 
		{
            System.out.println(str + " - Banglalink");
        } 
		else if (str.charAt(2) == '8') 
		{
            System.out.println(str + " - Robi");
        } 
		else if (str.charAt(2) == '5') 
		{
            System.out.println(str + " - Teletalk");
        }
    }
}