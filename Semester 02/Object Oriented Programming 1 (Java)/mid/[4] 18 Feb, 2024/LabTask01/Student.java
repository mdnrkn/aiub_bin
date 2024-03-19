public class Student {
    private String name;
    private int id;
    private double cgpa;

    public Student() {}

    public Student(String name, int id, double cgpa) {
        this.name = name;
        this.id = id;
        this.cgpa = cgpa;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setId(int id) {
        this.id = id;
    }

    public int getId() {
        return id;
    }

    public void setCgpa(double cgpa) {
        this.cgpa = cgpa;
    }

    public double getCgpa() {
        return cgpa;
    }

    public void showInfo() {
        System.out.println("Name: " + getName());
        System.out.println("Id: " + getId());
        System.out.println("Cgpa: " + getCgpa());
    }
}