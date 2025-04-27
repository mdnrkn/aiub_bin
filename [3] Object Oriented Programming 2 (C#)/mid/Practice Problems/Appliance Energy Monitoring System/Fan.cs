using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Appliance_Energy_Monitoring_System
{
    public class Fan : Appliance
    {
        private int bladeSize;
        private int speedLevels;

        public int BladeSize
        {
            get { return this.bladeSize; }
            set { this.bladeSize = value; }
        }

        public int SpeedLevels
        {
            get { return this.speedLevels; }
            set { this.speedLevels = value; }
        }

        public Fan() : base()
        {

        }

        public Fan(string applianceName, string brand, int bladeSize, int speedLevels) : base(applianceName, brand)
        {
            this.bladeSize = bladeSize;
            this.speedLevels = speedLevels;
        }

        public override void ShowDetails()
        {
            base.ShowDetails();
            Console.WriteLine("Blade Size: " + this.bladeSize);
            Console.WriteLine("Speed Levels: " + this.speedLevels);
        }

        public int MaxCoolingEfficiency()
        {
            return this.bladeSize * this.speedLevels;
        }

        public string NoiseCategory()
        {
            if (this.bladeSize < 10)
            { 
                return "Low"; 
            }
            else if (this.bladeSize >= 10 && this.bladeSize <= 15)
            {
                return "Medium";
            }
            else
            {
                return "High";
            }
        }
    }
}