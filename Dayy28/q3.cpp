#include <iostream>
#include <string>
using namespace std;

struct Ticket {
    int ticketNo;
    string passengerName;
    string destination;
    int seats;
};

int main() {
    Ticket t[100];
    int n = 0, choice, searchTicket;

    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display All Bookings\n";
        cout << "3. Search Booking\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Ticket Number: ";
            cin >> t[n].ticketNo;

            cout << "Enter Passenger Name: ";
            cin >> t[n].passengerName;

            cout << "Enter Destination: ";
            cin >> t[n].destination;

            cout << "Enter Number of Seats: ";
            cin >> t[n].seats;

            n++;
            cout << "Ticket booked successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No bookings available.\n";
            } else {
                cout << "\n===== Booking Details =====\n";
                cout << "--------------------------------------------------\n";
                cout << "Ticket No\tName\tDestination\tSeats\n";
                cout << "--------------------------------------------------\n";

                for (int i = 0; i < n; i++) {
                    cout << t[i].ticketNo << "\t\t"
                         << t[i].passengerName << "\t"
                         << t[i].destination << "\t\t"
                         << t[i].seats << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Ticket Number to Search: ";
            cin >> searchTicket;

            for (int i = 0; i < n; i++) {
                if (t[i].ticketNo == searchTicket) {
                    cout << "\nBooking Found!\n";
                    cout << "Ticket No   : " << t[i].ticketNo << endl;
                    cout << "Passenger   : " << t[i].passengerName << endl;
                    cout << "Destination : " << t[i].destination << endl;
                    cout << "Seats       : " << t[i].seats << endl;
                    break;
                }

                if (i == n - 1)
                    cout << "Booking not found!\n";
            }
            break;

        case 4:
            cout << "Thank you for using the Ticket Booking System.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}