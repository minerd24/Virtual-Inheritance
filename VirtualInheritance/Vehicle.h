#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
protected:
	string manufacturer;
	int year;
public:
	Vehicle()
	{
		manufacturer = "";
		year = 0;
	}
	void setValues(string, int);
	virtual string getManu() const;
	virtual int getYear() const;
	void displayInfo();
};
#endif