using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ticket_Booking_System
{
    public class TrainTicket : Ticket
    {
        private string coachType;
        private double fare;

        public string CoachType
        {
            get { return this.coachType; }
            set { this.coachType = value; }
        }

        public double Fare
        {
            get { return this.fare; }
            set { this.fare = value; }
        }

        public TrainTicket() : base()
        {

        }

        public TrainTicket(int ticketId, string passengerName, string coachType, double fare) : base(ticketId, passengerName)
        {
            this.coachType = coachType;
            this.fare = fare;
        }

        public override void ShowDetails()
        {
            base.ShowDetails();
            Console.WriteLine("Coach Type: " + this.coachType);
            Console.WriteLine("Fare: " + this.fare);
        }

        public bool IsACCoach()
        {
            if (this.coachType == "AC")
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public double GetTaxAmount()
        {
            return this.fare * 0.10;
        }
    }
}