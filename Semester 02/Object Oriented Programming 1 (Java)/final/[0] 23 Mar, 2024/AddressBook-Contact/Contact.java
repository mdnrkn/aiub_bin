// 3
public class Contact {
	private String personName;
	private String personId;
	private int age;
	private String mobileNumber;
	private char gender;

	Contact() {}

	Contact(String personName, String personId, int age, String mobileNumber, char gender) {
		this.personName = personName;
		this.personId = personId;
		this.age = age;
		this.mobileNumber = mobileNumber;
		this.gender = gender;
	}

	public void showPersonInfo() {
		System.out.println("========= Person Info =========");
		System.out.println("Person Name: " + this.personName);
		System.out.println("Person Id: " + this.personId);
		System.out.println("Person Age: " + this.age);
		System.out.println("Mobile Number: " + this.mobileNumber);
		System.out.println("Gender: " + this.gender);
		System.out.println("==============================");
	}

	public void detectMobileOperator() {
		if (this.mobileNumber.charAt(2) == '7')
			System.out.println("Mobile Operator: GP");
		else if (this.mobileNumber.charAt(2) == '8')
			System.out.println("Mobile Operator: Robi");
		else if (this.mobileNumber.charAt(2) == '6')
			System.out.println("Mobile Operator: Airtel");
		else if (this.mobileNumber.charAt(2) == '9')
			System.out.println("Mobile Operator: Banglalink");
	}
}