#include "Car.h"

void Car::setDoor(int d)
{
	doorCount = d;
}
int Car::getDoor()
{
	return doorCount;
}
void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Number of Doors: " << doorCount << endl;
}