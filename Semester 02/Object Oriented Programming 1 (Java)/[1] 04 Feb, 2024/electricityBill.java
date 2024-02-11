public class electricityBill{
	public static void main(String[] args){
		double watt, bill, perUnit, temp, time;
		time = 30 * 24;
		watt = 800;
		perUnit = 10;
		
		temp = (watt * time) / 1000;
		
		bill = temp * perUnit;
		
		System.out.println("Electricity Bill : "+bill);
	}
}