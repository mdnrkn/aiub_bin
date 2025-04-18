using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Shape_Drawing_System
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Shape :");
            Shape s1 = new Shape();
            s1.ShapeName = "Simple Shape";
            s1.ShapeType = "Basic";
            s1.ShowDetails();
            Console.WriteLine();

            Shape s2 = new Shape("Advanced Shape", "Complex");
            s2.ShowDetails();
            Console.WriteLine();

            Console.WriteLine("Rectangle :");
            Rectangle r1 = new Rectangle();
            r1.ShapeName = "Small Rectangle";
            r1.ShapeType = "A";
            r1.Length = 5.0;
            r1.Width = 3.0;
            r1.ShowDetails();
            Console.WriteLine($"Is Square: {r1.IsSquare()}");
            Console.WriteLine($"Perimeter: {r1.GetPerimeter()}");
            Console.WriteLine(r1.GetPerimeter("cm"));
            Console.WriteLine();

            Rectangle r2 = new Rectangle("Perfect Square", "B", 4.0, 4.0);
            r2.ShowDetails();
            Console.WriteLine($"Is Square: {r2.IsSquare()}");
            Console.WriteLine($"Perimeter: {r2.GetPerimeter()}");
            Console.WriteLine(r2.GetPerimeter("m"));
            Console.WriteLine();

            Console.WriteLine("Circle :");
            Circle c1 = new Circle();
            c1.ShapeName = "Small Circle";
            c1.ShapeType = "Round";
            c1.Radius = 5.0;
            c1.Color = "Red";
            c1.ShowDetails();
            Console.WriteLine($"Diameter: {c1.GetDiameter()}");
            Console.WriteLine($"Is Large Circle: {c1.IsLargeCircle()}");
            Console.WriteLine();

            Circle c2 = new Circle("Large Circle", "Round", 15.0, "Blue");
            c2.ShowDetails();
            Console.WriteLine($"Diameter: {c2.GetDiameter()}");
            Console.WriteLine($"Is Large Circle: {c2.IsLargeCircle()}");
        }
    }
}
