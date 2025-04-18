using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Shape_Drawing_System
{
    public class Shape
    {
        protected string shapeName;
        protected string shapeType;
        protected static int totalShapes = 0;

        public string ShapeName
        {
            get { return this.shapeName; }
            set { this.shapeName = value; }
        }

        public string ShapeType
        {
            get { return this.shapeType; }
            set { this.shapeType = value; }
        }

        public static int TotalShapes
        {
            get { return totalShapes; }
            set { totalShapes = value; }
        }

        public Shape()
        {
            totalShapes++;
        }

        public Shape(string shapeName, string shapeType)
        {
            this.shapeName = shapeName;
            this.shapeType = shapeType;
            totalShapes++;
        }

        public virtual void ShowDetails()
        {
            Console.WriteLine("Shape Information:");
            Console.WriteLine("Shape Name: " + this.shapeName);
            Console.WriteLine("Shape Type: " + this.shapeType);
            Console.WriteLine("Total Shapes: " + totalShapes);
        }
    }
}