#include "Odometer.h" 

Odometer::Odometer()
{
	mileage = 0;
}

int Odometer::getMileage() const
{
	return mileage;
}

void Odometer::addMile(FuelGauge& other)
{
	mileage += 1;
	if (mileage % 24 == 0)
	{
		other.useFuel();
	}
}