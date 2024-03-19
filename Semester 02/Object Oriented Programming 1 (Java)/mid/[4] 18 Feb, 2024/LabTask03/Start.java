public class Start {
    public static void main(String[] args) {
        StoryBook story1 = new StoryBook("12-345", "The Cat", "Mr. Rock", "Horror", 5.99, 20);
        StoryBook.setDiscountRate(0.1);
        story1.showDetails();
       
        System.out.println("-----x-----");

        TextBook text1 = new TextBook("16-545", "English For Today", "Nishat Raihan", 6, 3.99, 25);
        TextBook.setDiscountRate(0.3);
        text1.showDetails();
    }
}