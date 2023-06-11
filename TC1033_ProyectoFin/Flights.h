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
	string availability;
public:
	Flights();//revise
	Flights(string, string, string, string, string, string, string);

	void setFlightID(string);
	void setStatus(string);
	void setOrigin(string);
	void setDestination(string);
	void setDepartureTime(string);
	void setArrivalTime(string);
	void setAvailability(string);

	string getFlightID();
	string getStatus();
	string getOrigin();
	string getDestination();
	string getDepartureTime();
	string getArrivalTime();
	string getAvailability();
};