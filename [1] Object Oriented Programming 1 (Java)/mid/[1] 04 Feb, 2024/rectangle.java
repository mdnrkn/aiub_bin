public class rectangle{
	public static void main(String[] args){
		double width = 5.6, height = 8.5;
		double area, perimeter;
		
		area = width * height;
		perimeter = 2 * (width + height);
		
		System.out.println("The area of the Rectangle : "+area);
		System.out.println("The perimeter of the Rectangle : "+perimeter);
	}
}