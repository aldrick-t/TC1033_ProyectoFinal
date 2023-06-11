#include <iostream>
#include "Passengers.h"
using namespace std;

//constructors
Passengers::Passengers()
{
	name = "";
	age = 0;
	seat = "";
};
Passengers::Passengers(string name, int age, string status, string seat) {
	this->name = name;
	this->age = age;
	this->status = status;
	this->seat = seat;
};
//setters
void Passengers::setName(string name) { this->name = name; };
void Passengers::setAge(int age) { this->age = age; };
void Passengers::setStatus(string status) { this->status = status; };
void Passengers::setSeat(string seat) { this->seat = seat; };

//getters
string Passengers::getName() { return name; };
int Passengers::getAge() { return age; };
string Passengers::getStatus() { return status; };
string Passengers::getSeat() { return seat; };