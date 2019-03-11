#include "FuelGauge.h"

const int FUEL_LIMIT = 15;

FuelGauge::FuelGauge()
{
	fuelAmount = 0;
}

int FuelGauge::getFuelAmount() const
{
	return fuelAmount;
}

void FuelGauge::addFuel()
{
	if (fuelAmount < FUEL_LIMIT)
	{
		fuelAmount += 1;
	}
}

void FuelGauge::useFuel()
{
	if (fuelAmount > 0)
	{
		fuelAmount -= 1;
	}
}