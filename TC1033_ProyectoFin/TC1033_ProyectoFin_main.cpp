/*
Aldrick Tadeo, A01710105
TC1033.851
Proyecto - Situacion Problema(codigo)

*/
#include <iostream>
#include <string>
#include <vector>
#include "Flights.h"
#include "Passengers.h"
using namespace std;

int main() {
	vector<Passengers*> passengers;
	vector<Flights*> flights;
	//passenger objects
	passengers.push_back(new Passengers("Gwen S.", 15, "Checked-in", "14B"));
	passengers.push_back(new Passengers("Jose Gonzalez", 22, "Checked-in", "14A"));
	passengers.push_back(new Passengers("Barack Obama", 45, "Checked-in", "14C"));
	//Flights objects
	flights.push_back(new Flights("DT1104", "Refueling", "New York City", "Los Angeles", "10:00", "16:00", 14));
	flights.push_back(new Flights("DT1105", "Boarding", "Seattle", "Los Angeles", "10:00", "16:00", 4));
	flights.push_back(new Flights("AN2216", "In Flight", "Mexico City", "Tokyo", "23:25", "12:40", 2));
	flights.push_back(new Flights("AN41", "Grounded", "Tokyo", "Sapporo", "23:25", "6:00", 13));
	flights.push_back(new Flights("AN0911", "Boarding", "Las Vegas", "Kyoto", "2:00", "23:40", 0));

	cout << "  ~=~ Welcome to the Airport System ~=~  " << endl;
	bool active = true;
	while (active == true) {
		int option;
		string optionBool;
		string name;
		string fname;
		string lname;
		string flightSearch;
		int age;
		string seat;
		string status;
		string flightID;
		string origin;
		string destination;
		string departureTime;
		string arrivalTime;
		int availability;
		cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
		cout << "           ~=~ MAIN MENU ~=~             " << endl;
		cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
		cout << "1. Available Flights" << endl;
		cout << "2. Available Passengers" << endl;
		cout << "3. Search for a Passenger" << endl;
		cout << "4. Search for a Flight" << endl;
		cout << "5. Add a Passenger" << endl;
		cout << "6. Add a Flight" << endl;
		cout << "7. Exit \n" << endl;
		cout << "Select an option: ";
		cin >> option;
		cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
		switch (option) {
		case 1:
			cout << "Available Flights: " << endl;
			cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
			for (int i = 0; i < flights.size(); i++) {
				if ((flights.at(i)->getStatus() != "In Flight") && (flights.at(i)->getAvailability() > 0)) {
					flights.at(i)->displayFlight();
					cout << "-----------------------------------------" << endl;
				}
			}
			cout << "Other Flights: " << endl;
			cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
			for (int i = 0; i < flights.size(); i++) {
				if ((flights.at(i)->getStatus() == "In Flight") || (flights.at(i)->getAvailability() == 0)) {
					flights.at(i)->displayFlight();
					cout << "-----------------------------------------" << endl;
				}
			}
			cout << "Return to Main Menu? (Y/N):";
			cin >> optionBool;
			if (optionBool == "Y" || optionBool == "y") {
				break;
			}
			else {
				cout << "Exiting Program..." << endl;
				active = false;
				break;
			}
			break;
		case 2:
			cout << "Available Passengers: " << endl;
			cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
			for (int i = 0; i < passengers.size(); i++) {
				if (passengers.at(i)->getStatus() != "Boarded") {
					passengers.at(i)->displayPassenger();
					cout << "-----------------------------------------" << endl;
				}
			}
			cout << "Other Passengers: " << endl;
			cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
			for (int i = 0; i < passengers.size(); i++) {
				if (passengers.at(i)->getStatus() == "Boarded") {
					passengers.at(i)->displayPassenger();
					cout << "-----------------------------------------" << endl;
				}
			}

			cout << "Return to Main Menu? (Y/N):";
			cin >> optionBool;
			if (optionBool == "Y" || optionBool == "y") {
				break;
			}
			else {
				cout << "Exiting Program..." << endl;
				active = false;
			}
			break;
		case 3:
			cout << "Search for a Passenger: " << endl;
			cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
			cout << "Enter the name of the passenger: " << endl;
			cin.ignore();
			getline(cin, name, '\n');
			cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
			for (int i = 0; i < passengers.size(); i++) {
				if (passengers.at(i)->getName() == name) {
					passengers.at(i)->displayPassenger();
				}
			}
			break;
		case 4:
			cout << "Search for a Flight: " << endl;
			cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
			cout << "Enter the flight number or Destination: " << endl;
			cin.ignore();
			getline(cin, flightSearch, '\n');
			for (int i = 0; i < flights.size(); i++) {
				if ((flights.at(i)->getFlightID() == flightSearch) || (flights.at(i)->getDestination() == flightSearch)) {
					flights.at(i)->displayFlight();
				}
			}
			cout << "Return to Main Menu? (Y/N):";
			cin >> optionBool;
			if (optionBool == "Y" || optionBool == "y") {
				break;
			}
			else {
				cout << "Exiting Program..." << endl;
				active = false;
			}
			break;
		case 5:
			cout << "Add a Passenger: " << endl;
			cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
			cout << "Enter the name of the passenger: " << endl;
			cin.ignore();
			getline(cin, name, '\n');
			cout << "Enter the age of the passenger: " << endl;
			cin >> age;
			cout << "Enter the status of the passenger: " << endl;
			cin.ignore();
			getline(cin, status, '\n');
			cout << "Enter the seat number of the passenger: " << endl;
			cin >> seat;
			passengers.push_back(new Passengers(name, age, status, seat));

			cout << "Return to Main Menu? (Y/N):";
			cin >> optionBool;
			if (optionBool == "Y" || optionBool == "y") {
				break;
			}
			else {
				cout << "Exiting Program..." << endl;
				active = false;
			}
			break;
		case 6:
			cout << "Add a Flight: " << endl;
			cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
			cout << "Enter the flight number (AA00000): ";
			cin >> flightID;
			cout << "Enter the status of the flight " << endl;
			cout << "Grounded, Refueling, Service, AtGate, InFlight, Delayed: " << endl;
			cin >> status;
			cout << "Enter the origin: " << endl;
			cin.ignore();
			getline(cin, origin, '\n');
			cout << "Enter the destination: " << endl;
			cin.ignore();
			getline(cin, destination, '\n');
			cout << "Enter the departure time (00:00): " << endl;
			cin >> departureTime;
			cout << "Enter the arrival time: " << endl;
			cin >> arrivalTime;
			cout << "Enter the seat availability: " << endl;
			cin >> availability;
			flights.push_back(new Flights(flightID, status, origin, destination, departureTime, arrivalTime, availability));

			cout << "Return to Main Menu? (Y/N):";
			cin >> optionBool;
			if (optionBool == "Y" || optionBool == "y") {
				break;
			}
			else {
				cout << "Exiting Program..." << endl;
				active = false;
			}
			break;
		case 7:
			cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
			cout << "Exiting..." << endl;
			active = false;
			break;
		default:
			cout << "Invalid option, please try again." << endl;
			break;
		}
	}
};