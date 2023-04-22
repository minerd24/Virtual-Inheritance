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
	void setValues(string a, int b)
	{
		manufacturer = a;
		year = b;
	}
	string getManu()
	{
		return manufacturer;
	}
	int getYear()
	{
		return year;
	}
	void displayInfo()
	{
		cout << "Manufacturer: " << manufacturer << endl;
		cout << "Year: " << year << endl;
	}
};