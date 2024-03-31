public class Run {
  public static void main(String args[]) {
    Library L = new Library("Tokyo Public Library", "Japan");

    Book B1 = new Book("Law", "Oscar", "7362855", "Theory", 15);
    Book B2 = new Book("journalism", "Emmett, Miles", "928337747", "Theory", 22);

    L.addNewBook(B1);
    L.addNewBook(B2);
    L.addNewBookCopy(B1, 10);
    L.addNewBookCopy(B2, 15);
    L.showLibInfo();
  }
}