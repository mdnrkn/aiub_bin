public class AddressBook {
  private String ownerName;
  private String info;
  private Contact[] listOfContact = new Contact[1000];
  private int totalContact;

  AddressBook() {}

  AddressBook(String ownerName, String info) {
    this.ownerName = ownerName;
    this.info = info;
  }

  public void showAllContactInfo() {
    System.out.println("========= Library Info =========");
    System.out.println("Owner Name: " + this.ownerName);
    System.out.println("Owner info: " + this.info);
    System.out.println("================================");

    for (int i = 0; i < this.totalContact; i++) {
      if (this.listOfContact[i] != null) {
        this.listOfContact[i].showPersonInfo();
      }
    }
  }

  public void addContact(Contact con) {
    listOfContact[totalContact] = con;
    totalContact++;
  }

  public void detectMobileOperators() {
    System.out.println("========= Mobile Operators =========");
    for (int i = 0; i < this.totalContact; i++) {
      if (this.listOfContact[i] != null) {
        this.listOfContact[i].detectMobileOperator();
      }
    }
    System.out.println("====================================");
  }
}