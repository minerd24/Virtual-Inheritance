#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int year;
public:
	Vehicle()
	{
		manufacturer = "";
		year = 0;
	}
	void setValues(string, int);
	string getManu();
	int getYear();
	void displayInfo();
};