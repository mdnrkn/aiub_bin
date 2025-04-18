using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Appliance_Energy_Monitoring_System
{
    class Program
    {
        static void Main(string[] args)
        {
            Fan f1 = new Fan();
            f1.ApplianceName = "Default Fan";
            f1.Brand = "Generic";
            f1.BladeSize = 10;
            f1.SpeedLevels = 3;
            f1.ShowDetails();
            Console.WriteLine($"Max Cooling Efficiency: {f1.MaxCoolingEfficiency()}");
            Console.WriteLine($"Noise Category: {f1.NoiseCategory()}");
            Console.WriteLine();

            Fan f2 = new Fan("Ceiling Fan", "CoolAir", 12, 5);
            f2.ShowDetails();
            Console.WriteLine($"Max Cooling Efficiency: {f2.MaxCoolingEfficiency()}");
            Console.WriteLine($"Noise Category: {f2.NoiseCategory()}");
            Console.WriteLine();

            AC ac1 = new AC();
            ac1.ApplianceName = "Default AC";
            ac1.Brand = "Generic";
            ac1.Btu = 12000;
            ac1.StarRating = 3;
            ac1.ShowDetails();
            Console.WriteLine($"Monthly Electricity Cost (100 hours): {ac1.MonthlyElectricityCost(100):C}");
            Console.WriteLine($"Monthly Electricity Cost (100 hours, $0.12/unit): {ac1.MonthlyElectricityCost(100, 0.12):C}");
            Console.WriteLine($"Is Eco-Friendly: {ac1.IsEcoFriendly()}");
            Console.WriteLine();

            AC ac2 = new AC("Split AC", "ChillMax", 18000, 5);
            ac2.ShowDetails();
            Console.WriteLine($"Monthly Electricity Cost (100 hours): {ac2.MonthlyElectricityCost(100):C}");
            Console.WriteLine($"Monthly Electricity Cost (100 hours, $0.12/unit): {ac2.MonthlyElectricityCost(100, 0.12):C}");
            Console.WriteLine($"Is Eco-Friendly: {ac2.IsEcoFriendly()}");
            Console.WriteLine();

            Console.WriteLine($"Total Energy Used by All Appliances: {Appliance.TotalEnergyUsed} kWh");

        }
    }
}