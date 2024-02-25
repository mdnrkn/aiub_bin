import java.util.Scanner;
public class task4 {
    public static void main(String[] args){
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter a string : ");
		String str = input.nextLine();
		
		StringBuffer str2 = new StringBuffer(str);

		str2.reverse();
				
		System.out.println("Reversed string : " + str2);
	}
}
