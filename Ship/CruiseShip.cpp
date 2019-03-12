#include "CruiseShip.h"

CruiseShip::CruiseShip(string newName, string newDate, int newPassengers) : Ship(newName, newDate)
{
	passengers = newPassengers;
}

int CruiseShip::getPassengers() const
{
	return passengers;
}

void CruiseShip::setPassengers(int newPassengers)
{
	passengers = newPassengers;
}

void CruiseShip::print() const
{
	cout << "Ship Name:  " << getName() << endl;
	cout << "Passengers: " << passengers << endl;
}