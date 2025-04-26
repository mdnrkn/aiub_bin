using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ticket_Booking_System
{
    public class FlightTicket : Ticket
    {
        private string seatClass;
        private double luggageWeight;

        public string SeatClass
        {
            get { return this.seatClass; }
            set { this.seatClass = value; }
        }

        public double LuggageWeight
        {
            get { return this.luggageWeight; }
            set { this.luggageWeight = value; }
        }

        public FlightTicket() : base()
        {

        }

        public FlightTicket(int ticketId, string passengerName, string seatClass, double luggageWeight) : base(ticketId, passengerName)
        {
            this.seatClass = seatClass;
            this.luggageWeight = luggageWeight;
        }

        public override void ShowDetails()
        {
            base.ShowDetails();
            Console.WriteLine("Seat Class: " + this.seatClass);
            Console.WriteLine("Luggage Weight: " + this.luggageWeight);
        }

        public bool IsExcessLuggage()
        {
            if (this.luggageWeight > 20)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public bool IsPrioritySeat()
        {
            if (this.seatClass == "Business")
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public bool IsPrioritySeat(bool isFrequentFlyer)
        {
            if (isFrequentFlyer && this.seatClass == "Business")
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