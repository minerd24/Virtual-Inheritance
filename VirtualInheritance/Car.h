#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
class Car : public Vehicle
{
protected:
	int doorCount;
public:
	Car()
	{
		doorCount = 0;
	}
	virtual int getDoor() const;
	void setDoor(int d);
	void displayInfo();
};
#endif