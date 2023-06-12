#include <iostream>
#include "Flights.h"
using namespace std;

Flights::Flights() {
	flightID = "000";
	status = "ground";
	origin = " ";
	destination = " ";
	departureTime = " ";
	arrivalTime = " ";
	availability = 0;
};
Flights::Flights(string flightID, string status, string origin, string destination, string departureTime, string arrivalTime, int availability) {
	this->flightID = flightID;
	this->status = status;
	this->origin = origin;
	this->destination = destination;
	this->departureTime = departureTime;
	this->arrivalTime = arrivalTime;
	this->availability = availability;
};
//define setters
void Flights::setFlightID(string flightID) { this->flightID = flightID; }
void Flights::setStatus(string status) { this->status = status; }
void Flights::setOrigin(string origin) { this->origin = origin; }
void Flights::setDestination(string destination) { this->destination = destination; }
void Flights::setDepartureTime(string departureTime) { this->departureTime = departureTime; }
void Flights::setArrivalTime(string arrivalTime) { this->arrivalTime = arrivalTime; }
void Flights::setAvailability(int availability) { this->availability = availability; }

//define getters
string Flights::getFlightID() { return flightID; }
string Flights::getStatus() { return status; }
string Flights::getOrigin() { return origin; }
string Flights::getDestination() { return destination; }
string Flights::getDepartureTime() { return departureTime; }
string Flights::getArrivalTime() { return arrivalTime; }
int Flights::getAvailability() { return availability; }

//define print function
void Flights::displayFlight() {
	cout << "Flight ID\t " << flightID << endl;
	cout << "Status:\t\t " << status << endl;
	cout << "Origin:\t\t " << origin << endl;
	cout << "Destination:\t " << destination << endl;
	cout << "Departure Time:\t " << departureTime << endl;
	cout << "Arrival Time:\t " << arrivalTime << endl;
	cout << "Availability:\t " << availability << endl;
	cout << endl;
}