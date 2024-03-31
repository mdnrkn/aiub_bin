public class Run {
  public static void main(String args[]) {
    AddressBook L = new AddressBook("Tokyo Public Library", "Japan");

    Contact B1 = new Contact("Law", "Oscar", "7362855", "Theory", 15);
    Contact B2 = new Contact("journalism", "Emmett, Miles", "928337747", "Theory", 22);

    L.addNewBook(B1);
    L.addNewBook(B2);
    L.addNewBookCopy(B1, 10);
    L.addNewBookCopy(B2, 15);
    L.showLibInfo();
  }
}