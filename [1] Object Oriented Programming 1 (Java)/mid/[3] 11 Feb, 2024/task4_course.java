public class task4_course {
    private String courseName;
    private String courseCode;
    private int courseCredit;

    // course name
    public void setCourseName(String name) {
        this.courseName = name;
    }
    public String getCourseName() {
        return this.courseName;
    }

    // course code
    public void setCourseCode(String code) {
        this.courseCode = code;
    }
    public String getCourseCode() {
        return this.courseCode;
    }

    // course credit
    public void setCourseCredit(int credit) {
        this.courseCredit = credit;
    }
    public int getCourseCredit() {
        return this.courseCredit;
    }
    
    public void ShowCourseInfo() {
        System.out.println("Course Name: " + courseName);
        System.out.println("Course Code: " + courseCode);
        System.out.println("Credits: " + courseCredit);
    }
}
