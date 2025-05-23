using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FinalTask
{
    public class Car : ICar
    {
        private string carName;
        private string model;
        private string speed;
        public string CarName
        {
            get { return carName; }
            set { carName = value; }
        }
        public string Model
        {
            get { return model; }
            set { model = value; }
        }
        public string Speed
        {
            get { return speed; }
            set { speed = value; }
        }

        public Car()
        { 
        
        }
        public Car(string carName, string model, string speed)
        {
            this.carName = carName;
            this.model = model;
            this.speed = speed;
        }

        public void ShowDetails()
        {
            Console.WriteLine("Car Name :" +this.carName);
            Console.WriteLine("Car Model :" +this.model);
            Console.WriteLine("Car Speed :" +this.speed);
        }

        public void Break()
        {
            Console.WriteLine("Car speed is decreasing");
        }
        public void Accelerate()
        {
            Console.WriteLine("Car speed is increasing");
        }   
    }
}