public class cgpa{
	public static void main(String[] args){
		int sub = 5;
		double[] cg = {3.44, 3.5, 3.21, 4, 3.68};
		double sum = 0;
		
		for(int i = 0; i < sub; i++)
		{
			sum =+ cg[i];
		}
		
		double cgpa = sum / sub;
		
		System.out.println("CGPA : "+cgpa);
	}
}