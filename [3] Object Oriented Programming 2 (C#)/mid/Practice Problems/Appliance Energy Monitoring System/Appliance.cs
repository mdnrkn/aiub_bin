﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Appliance_Energy_Monitoring_System
{
    public class Appliance
    {
        protected string applianceName;
        protected string brand;
        protected static double totalEnergyUsed;

        public string ApplianceName
        {
            get { return applianceName; }
            set { applianceName = value; }
        }

        public string Brand
        {
            get { return brand; }
            set { brand = value; }
        }

        public static double TotalEnergyUsed
        {
            get { return totalEnergyUsed; }
            set { totalEnergyUsed = value; }
        }

        public Appliance()
        {

        }

        public Appliance(string applianceName, string brand)
        {
            this.applianceName = applianceName;
            this.brand = brand;
        }

        public virtual void ShowDetails()
        {
            Console.WriteLine("Appliance Information : ");
            Console.WriteLine("Appliance: " + this.applianceName);
            Console.WriteLine("Brand: " + this.brand);
            Console.WriteLine($"Total Energy Used: {TotalEnergyUsed} kWh");
        }
    }
}