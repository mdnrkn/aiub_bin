import java.util.Scanner;
public class task6 {
    public static void main(String[] args){
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter your Email address : ");
		String str = input.nextLine();
		
		boolean flag = false;
		int indx = -1;
		
		for(int i = 0; i < str.length(); i++)
		{
			if(str.charAt(i) == '@')
			{
				indx = i;
				for(int j = indx + 1; j < str.length(); j++)
				{
					if(str.charAt(j) == '.')
					{
						flag = true;
					}
				}
			}
		}

		if(flag)
		{
			System.out.println("Email address valid");
		}
		else
		{
			System.out.println("Invalid Email address");
		}
	}
}
