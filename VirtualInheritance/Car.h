#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
private:
	int doorCount;
public:
	Car()
	{
		doorCount = 0;
	}
	int getDoor();
	void setDoor(int d);
	void displayInfo();
};