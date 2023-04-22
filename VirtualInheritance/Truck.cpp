#include "Truck.h"
void Truck::setCap(int d)
{
	towCap = d;
}
int Truck::getCap()
{
	return towCap;
}
void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towCap << endl;
}