public class Start {
    public static void main(String[] args) {
        Book b1 = new Book();
        b1.setIsbn("12-345");
        b1.setBookTitle("The Cat");
        b1.setAuthorName("Mr. Rock");
        b1.setPrice(5.99);
        b1.setAvailableQuantity(20);
        b1.addQuantity(5);
        b1.sellQuantity(15);
        b1.showDetails();
    }
}
