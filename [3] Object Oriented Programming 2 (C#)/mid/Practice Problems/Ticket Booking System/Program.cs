using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ticket_Booking_System
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Ticket :");
            Ticket t1 = new Ticket();
            t1.TicketId = 1;
            t1.PassengerName = "Ticket Passenger 1";
            t1.ShowDetails();
            Console.WriteLine($"Total Bookings: {Ticket.TotalBookings()}");
            Console.WriteLine();

            Ticket t2 = new Ticket(2, "Ticket Passenger 2");
            t2.ShowDetails();
            Console.WriteLine($"Total Bookings: {Ticket.TotalBookings()}");
            Console.WriteLine();

            Console.WriteLine("Train Ticket :");
            TrainTicket tr1 = new TrainTicket();
            tr1.TicketId = 3;
            tr1.PassengerName = "Train Ticket 1";
            tr1.CoachType = "AC";
            tr1.Fare = 500.0;
            tr1.ShowDetails();
            Console.WriteLine($"Is AC Coach: {tr1.IsACCoach()}");
            Console.WriteLine($"Tax Amount: {tr1.GetTaxAmount()}");
            Console.WriteLine($"Total Bookings: {Ticket.TotalBookings()}");
            Console.WriteLine();

            TrainTicket tr2 = new TrainTicket(4, "Train Ticket 2", "Sleeper", 350.0);
            tr2.ShowDetails();
            Console.WriteLine($"Is AC Coach: {tr2.IsACCoach()}");
            Console.WriteLine($"Tax Amount: {tr2.GetTaxAmount()}");
            Console.WriteLine($"Total Bookings: {Ticket.TotalBookings()}");
            Console.WriteLine();

            Console.WriteLine("Flight Ticket :");
            FlightTicket f1 = new FlightTicket();
            f1.TicketId = 5;
            f1.PassengerName = "Flight Ticket";
            f1.SeatClass = "Economy";
            f1.LuggageWeight = 25.0;
            f1.ShowDetails();
            Console.WriteLine($"Is Excess Luggage: {f1.IsExcessLuggage()}");
            Console.WriteLine($"Is Priority Seat: {f1.IsPrioritySeat()}");
            Console.WriteLine($"Is Priority Seat (Frequent Flyer): {f1.IsPrioritySeat(true)}");
            Console.WriteLine($"Total Bookings: {Ticket.TotalBookings()}");
            Console.WriteLine();

            FlightTicket f2 = new FlightTicket(6, "Flight Ticket", "Business", 18.0);
            f2.ShowDetails();
            Console.WriteLine($"Is Excess Luggage: {f2.IsExcessLuggage()}");
            Console.WriteLine($"Is Priority Seat: {f2.IsPrioritySeat()}");
            Console.WriteLine($"Is Priority Seat (Frequent Flyer): {f2.IsPrioritySeat(true)}");
            Console.WriteLine($"Total Bookings: {Ticket.TotalBookings()}");

        }
    }
}
