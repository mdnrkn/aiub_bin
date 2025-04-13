using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ticket_Booking_System
{
    public class Ticket
    {
        protected int ticketId;
        protected string passengerName;
        protected static int totalBookings = 0;

        public Ticket()
        {
            totalBookings++;
        }

        public Ticket(int ticketId, string passengerName)
        {
            this.ticketId = ticketId;
            this.passengerName = passengerName;
            totalBookings++;
        }

        public int TicketId
        {
            get { return this.ticketId; }
            set { this.ticketId = value; }
        }

        public string PassengerName
        {
            get { return this.passengerName; }
            set { this.passengerName = value; }
        }

        public static int TotalBookings()
        {
            return totalBookings;
        }

        public void ShowDetails()
        {
            Console.WriteLine("Ticket Information:");
            Console.WriteLine("Ticket ID: " + this.ticketId);
            Console.WriteLine("Passenger Name: " + this.passengerName);
        }
    }
}
