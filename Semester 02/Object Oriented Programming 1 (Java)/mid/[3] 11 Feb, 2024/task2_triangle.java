public class task2_triangle {
    private int x, y, z;

    // X
    public void setX(int x) {
        this.x = x;
    }
    public int getX() {
        return x;
    }

    // Y
    public void setY(int y) {
        this.y = y;
    }
    public int getY() {
        return y;
    }

    // Z
    public void setZ(int z) {
        this.z = z;
    }
    public int getZ() {
        return z;
    }

   public void ShowInfo() {
       System.out.println("Sides of the triangle: " + x + ", " + y + ", " + z);
       TestTriangle();
   }
   
   private void TestTriangle() { 
       if (x == y && y == z) { 
           System.out.println("The triangle is equilateral.");
       } else if (x == y || y == z || x == z) { 
           System.out.println("The triangle is isosceles.");
       } else { 
           System.out.println("The triangle is scalene.");
       }
   }
}
