#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
class Truck : public Vehicle
{
protected:
	int towCap;
public:
	Truck()
	{
		towCap = 0;
	}
	virtual int getCap() const;
	void setCap(int d);
	void displayInfo();
};
#endif