using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Shape_Drawing_System
{
    public class Rectangle : Shape
    {
        private double length;
        private double width;

        public double Length
        {
            get { return this.length; }
            set { this.length = value; }
        }

        public double Width
        {
            get { return this.width; }
            set { this.width = value; }
        }

        public Rectangle() : base()
        {

        }

        public Rectangle(string shapeName, string shapeType, double length, double width) : base(shapeName, shapeType)
        {
            this.length = length;
            this.width = width;
        }

        public override void ShowDetails()
        {
            base.ShowDetails();
            Console.WriteLine("Length: " + this.length);
            Console.WriteLine("Width: " + this.width);
        }

        public bool IsSquare()
        {
            if (this.length == this.width)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public double GetPerimeter()
        {
            return 2 * (this.length + this.width);
        }

        public string GetPerimeter(string unit)
        {
            return $"Perimeter: {GetPerimeter()} {unit}";
        }
    }
}