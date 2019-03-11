// main code goes here
#include <iostream>
using namespace std;
#include "FuelGauge.h"
#include "Odometer.h"

int main()
{
	FuelGauge myGauge;
	Odometer myOdometer;

	while (myGauge.getFuelAmount() < 15)
	{
		myGauge.addFuel();
	}

	while (myGauge.getFuelAmount() > 0)
	{
		myOdometer.addMile(myGauge);
		cout << "Current Mileage: " << myOdometer.getMileage() << endl;
		cout << "Current Fuel Amount: " << myGauge.getFuelAmount() << endl;
	}

	return 0;
}