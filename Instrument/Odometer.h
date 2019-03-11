#pragma once
#include "FuelGauge.h"

class Odometer
{
private:
	int mileage;
public:
	Odometer();
	int getMileage() const;
	void addMile(FuelGauge& other);
};

