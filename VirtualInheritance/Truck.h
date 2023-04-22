#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
private:
	int towCap;
public:
	Truck()
	{
		towCap = 0;
	}
	int getCap();
	void setCap(int d);
	void displayInfo();
};