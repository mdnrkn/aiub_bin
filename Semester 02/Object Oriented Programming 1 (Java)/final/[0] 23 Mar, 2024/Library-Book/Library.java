public class Library {
  private String libName;
  private String libAddress;
  private Contact[] books = new Contact[9000];
  private int totalBook;

  Library() {}

  Library(String libName, String libAddress) {
    this.libName = libName;
    this.libAddress = libAddress;
  }

  public void showLibInfo() {
    System.out.println("========= Library Info =========");
    System.out.println("Library Name: " + this.libName);
    System.out.println("Library Address: " + this.libAddress);
    System.out.println("==============================");

    for (int i = 0; i < this.books.length; i++) {
      if (this.books[i] != null) {
        this.books[i].showInfo();
      }
    }
  }

  public void addNewBook(Contact book) {
    books[totalBook] = book;
    totalBook++;
  }

  public void addNewBookCopy(Contact book, int copy) {
    book.addBookCopy(copy);
  }
}