public class Start
{
	public static void main(String [] args)
	{
		System.out.println("\nStory Book 1 Details..........");
		StoryBook s1 = new StoryBook();
		s1.setIsbn("ABCD1234");
		s1.setBookTitle("The World");
		s1.setAuthorName("Thomas");
		s1.setPrice(505.55);
		s1.setAvaiableQuantity(20);
		s1.setCategory("Horror");
		s1.addQuantity(5);
		s1.sellQuantity(3);
		s1.showDetails();
		
		System.out.println("\nStory Book 2 Details..........");
		StoryBook s2 = new StoryBook("EFG3456","Foodism","Wonker",606.77, 50,"Romantic");
		s2.showDetails();
		
		
		System.out.println("\nText Book 1 Details..........");
		TextBook t1 = new TextBook();
		t1.setIsbn("XYZZ1234");
		t1.setBookTitle("C++");
		t1.setAuthorName("Charls");
		t1.setPrice(2205.55);
		t1.setAvaiableQuantity(15);
		t1.setStandard(12);
		t1.addQuantity(5);
		t1.sellQuantity(3);
		t1.showDetails();
		
		System.out.println("\nText Book 2 Details..........");
		TextBook t2 = new TextBook("XYZZ3456","JAVA","MAHALA",4406.77, 60,13);
		t2.showDetails();
	}
}