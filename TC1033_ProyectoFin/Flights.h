#pragma once
#include <iostream>
using namespace std;

class Flights {
private:
	string flightID;
	string status;
	string origin;
	string destination;
	string departureTime;
	string arrivalTime;
	int availability;
public:
	Flights();//revise
	Flights(string, string, string, string, string, string, int);

	void setFlightID(string);
	void setStatus(string);
	void setOrigin(string);
	void setDestination(string);
	void setDepartureTime(string);
	void setArrivalTime(string);
	void setAvailability(int);

	string getFlightID();
	string getStatus();
	string getOrigin();
	string getDestination();
	string getDepartureTime();
	string getArrivalTime();
	int getAvailability();

	void displayFlight();
};