public class StoryBook {
    private String isbn;
    private String bookTitle;
    private String authorName;
    private double price;
    private String category;
    private int availableQuantity;
    private static double discountRate;

    public StoryBook() {}

    public StoryBook(String isbn, String bookTitle, String authorName, String category, double price, int availableQuantity) {
        this.isbn = isbn;
        this.bookTitle = bookTitle;
        this.authorName = authorName;
        this.category = category;
        this.price = price;
        this.availableQuantity = availableQuantity;
    }

    public static void setDiscountRate(double rate) {
        discountRate = rate;
    }

    public void showDetails() {
        System.out.println("Book Title: " + bookTitle);
        System.out.println("Author: " + authorName);
        System.out.println("Category: " + category);
        System.out.println("Price: $" + price);
        System.out.println("Available Quantity: " + availableQuantity);
        System.out.println("Discount Rate: " + (discountRate * 100) + "%");
    }
}