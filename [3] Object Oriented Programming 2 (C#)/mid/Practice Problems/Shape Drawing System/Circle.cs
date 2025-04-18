using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Shape_Drawing_System
{
    public class Circle : Shape
    {
        private double radius;
        private string color;

        public double Radius
        {
            get { return this.radius; }
            set { this.radius = value; }
        }

        public string Color
        {
            get { return this.color; }
            set { this.color = value; }
        }

        public Circle() : base()
        {

        }

        public Circle(string shapeName, string shapeType, double radius, string color) : base(shapeName, shapeType)
        {
            this.radius = radius;
            this.color = color;
        }

        public override void ShowDetails()
        {
            base.ShowDetails();
            Console.WriteLine("Radius: " + this.radius);
            Console.WriteLine("Color: " + this.color);
        }

        public double GetDiameter()
        {
            return this.radius * 2;
        }

        public bool IsLargeCircle()
        {
            if (this.radius > 10)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}