#pragma once
class FuelGauge
{
private:
	int fuelAmount;
public:
	FuelGauge();
	int getFuelAmount() const;
	void addFuel();
	void useFuel();
};

