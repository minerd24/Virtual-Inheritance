#include "Vehicle.h"

using namespace std;

int main()
{
	Vehicle b;
	b.displayInfo();
	cout << "Now changing values!\n";
	string sHolder = "The Cheese Men";
	int iHoldr = 1924;
	b.setValues(sHolder, iHoldr);
	b.displayInfo();
}