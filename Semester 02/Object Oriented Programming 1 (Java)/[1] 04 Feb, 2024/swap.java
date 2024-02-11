public class swap{
	public static void main(String[] args){
			int a = 10, b = 5, temp;
			System.out.println("Before the swap :");
			System.out.print("A = "+a);
			System.out.println(", B = "+b);
			
			temp = a;
			a = b;
			b = temp;
			
			System.out.println("After the swap :");
			System.out.print("A = "+a);
			System.out.println(", B = "+b);
		}
	}