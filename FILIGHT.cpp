#include <bits/stdc++.h>
using namespace std;

class Flight {
private:
    string flightNo;
    string departure;
    string destination;
    int capacity;
    int reservedSeats;

public:
    Flight(string fn, string dep, string des, int cap) {
        flightNo = fn;
        departure = dep;
        destination = des;
        capacity = cap;
        reservedSeats = 0;
    }

    int reserveSeat() {
        if (reservedSeats < capacity) {
            reservedSeats++;
            return reservedSeats; 
        }
        return -1; 
    }

    friend class ReservationSystem;
};


class ReservationSystem {
private:
    vector<Flight> flights;

public:
    void addFlight(string fn, string dep, string des, int cap) {
        flights.push_back(Flight(fn, dep, des, cap));
    }

    void showAllFlights() {
        cout << "\n===== Available Flights (Fly BD) =====\n";
        for (int i = 0; i < flights.size(); i++) {
            cout << "Flight No   : " << flights[i].flightNo << endl;
            cout << "Departure  : " << flights[i].departure << endl;
            cout << "Destination: " << flights[i].destination << endl;
            cout << "Total Seats: " << flights[i].capacity << endl;
            cout << "---------------------------------\n";
        }
    }

    void reserveSeat() {
        string flightNumber;
        cout << "\nEnter Flight Number: ";
        cin >> flightNumber;

        for (int i = 0; i < flights.size(); i++) {
            if (flights[i].flightNo == flightNumber) {

                int seatNo = flights[i].reserveSeat();
                if (seatNo != -1) {
                    string passengerName;
                    string passengerID;

                    cout << "Enter Passenger Name: ";
                    cin.ignore();
                    getline(cin, passengerName);

                    cout << "Enter Passenger ID: ";
                    cin >> passengerID;

                    cout << "\n===== Ticket Confirmation =====\n";
                    cout << "Airline       : Fly BD\n";
                    cout << "Passenger Name: " << passengerName << endl;
                    cout << "Passenger ID  : " << passengerID << endl;
                    cout << "Flight No     : " << flights[i].flightNo << endl;
                    cout << "Departure     : " << flights[i].departure << endl;
                    cout << "Destination   : " << flights[i].destination << endl;
                    cout << "Seat Number   : " << seatNo << endl;
                    cout << "===============================\n";
                } else {
                    cout << "\nWe are sorry, no seats are available.\n";
                }
                return;
            }
        }

        cout << "\nWe are sorry, no such flight exists.\n";
    }
};

int main() {
    ReservationSystem system;

    system.addFlight("F101", "Dhaka", "Dubai", 2);
    system.addFlight("F202", "London", "Toronto", 3);
    system.addFlight("F303", "Dhaka", "Kuala Lumpur", 2);

    cout << "====================================\n";
    cout << "   Welcome to Fly BD Airline System  \n";
    cout << "====================================\n";

    while (true) {
        int choice;
        cout << "\n1. View Available Flights";
        cout << "\n2. Reserve a Seat";
        cout << "\n0. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            system.showAllFlights();
        } 
        else if (choice == 2) {
            system.reserveSeat();
        } 
        else if (choice == 0) {
            cout << "\nThank you for choosing Fly BD Airline.\n";
            return 0;
        } 
        else {
            cout << "\nInvalid choice. Please try again.\n";
        }
    }
}

