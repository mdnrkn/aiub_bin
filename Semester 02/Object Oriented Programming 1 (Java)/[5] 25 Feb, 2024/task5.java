import java.util.Scanner;
public class task5 {
    public static void main(String[] args){
		
		Scanner input = new Scanner(System.in);
	
		System.out.println("Enter 1st string : ");
		String str1 = input.nextLine();		
		
		System.out.println("Enter 2nd string : ");
		String str2 = input.nextLine();
			
		StringBuffer str3 = new StringBuffer();
		
		str3.append(str1);
		str3.append(str2);
				
		System.out.println("Concate string using StringBuffer: " + str3);
	}
}
