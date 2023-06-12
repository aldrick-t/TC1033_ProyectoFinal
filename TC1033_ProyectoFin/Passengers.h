#pragma once
#include <iostream>
using namespace std;

class Passengers {
private:
	string name;
	int age;
	string status;
	string seat;

public:
	Passengers(); //revise
	Passengers(string, int, string, string);

	void setName(string);
	void setAge(int);
	void setStatus(string);
	void setSeat(string);

	string getName();
	int getAge();
	string getStatus();
	string getSeat();

	void displayPassenger();
};