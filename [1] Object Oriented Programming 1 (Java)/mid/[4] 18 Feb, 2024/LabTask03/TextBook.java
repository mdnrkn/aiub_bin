public class TextBook {
    private String isbn;
    private String bookTitle;
    private String authorName;
    private int standard;
    private double price;
    private int availableQuantity;
    private static double discountRate;

    public TextBook() {}

    public TextBook(String isbn, String bookTitle, String authorName, int standard, double price, int availableQuantity) {
        this.isbn = isbn;
        this.bookTitle = bookTitle;
        this.authorName = authorName;
        this.standard = standard;
        this.price = price;
        this.availableQuantity = availableQuantity;
    }

    public static void setDiscountRate(double rate) {
        discountRate = rate;
    }

    public void showDetails() {
        System.out.println("Book Title: " + bookTitle);
        System.out.println("Author: " + authorName);
        System.out.println("Standard: " + standard);
        System.out.println("Price: $" + price);
        System.out.println("Available Quantity: " + availableQuantity);
        System.out.println("Discount Rate: " + (discountRate * 100) + "%");
    }
}