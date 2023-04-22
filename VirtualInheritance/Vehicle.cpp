#include "Vehicle.h"

using namespace std;
void Vehicle::setValues(string a, int b)
{
	manufacturer = a;
	year = b;
}
string Vehicle::getManu()
{
	return manufacturer;
}
int Vehicle::getYear()
{
	return year;
}
void Vehicle::displayInfo()
{
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year: " << year << endl;
}