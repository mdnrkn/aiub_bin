public class task1_student {

    private String name;
    private String id;
    private String department;
    private double cgpa;
    
    public task1_student(){}
    public task1_student(String name, String id, String department, double cgpa)
    {
        this.name = name;
        this.id = id;
        this.department = department;
        this.cgpa = cgpa;
    }

    // name
    public void setName(String name)
    {
        this.name = name;
    }
    public String getName()
    {
        return name;
    }

    // id
    public void setId(String id)
    {
        this.id = id;
    }
    public String getId()
    {
        return id;
    }

    // department
    public void setDepartment(String department)
    {
        this.department = department;
    }
    public String getDepartment()
    {
        return department;
    }

    // cgpa
    public void setCgpa(double cgpa)
    {
        this.cgpa = cgpa;
    }
    public double getCgpa()
    {
        return cgpa;
    }

    public void ShowInfo()
    {
        System.out.println("Name : "+getName());
        System.out.println("Id : "+getId());
        System.out.println("Department : "+getDepartment());
        System.out.println("Cgpa : "+getCgpa());
    }
}
