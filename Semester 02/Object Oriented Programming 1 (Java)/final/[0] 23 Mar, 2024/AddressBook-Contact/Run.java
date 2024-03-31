public class Run {
  public static void main(String args[]) {
    AddressBook A = new AddressBook("Thomas", "Teacher");
    Contact C1 = new Contact("Adam", "1234", 20, "01911234567", 'M');
    Contact C2 = new Contact("Eva", "4567", 25, "01755623102", 'F');
    A.addContact(C1);
    A.addContact(C2);
    A.showAllContactInfo();
    A.detectMobileOperators();
  }
}