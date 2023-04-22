#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string manu;
	int yr;
	cout << "Enter manufacturer of the vehicle > "; getline(cin, manu);
	cout << "Enter year of the vehicle > "; cin >> yr;
	Vehicle v;
	v.setValues(manu, yr);
	v.displayInfo();
	int doors;
	cout << "Enter manufacturer of the vehicle > "; cin.ignore(); getline(cin, manu);
	cout << "Enter year of the vehicle > "; cin >> yr;
	cout << "Enter the number of doors > "; cin >> doors;
	Car c;
	c.setValues(manu, yr);
	c.setDoor(doors);
	c.displayInfo();
	int tow;
	cout << "Enter manufacturer of the vehicle > "; cin.ignore(); getline(cin, manu);
	cout << "Enter year of the vehicle > "; cin >> yr;
	cout << "Enter the towing capacity > "; cin >> tow;
	Truck t;
	t.setValues(manu, yr);
	t.setCap(tow);
	t.displayInfo();
}
