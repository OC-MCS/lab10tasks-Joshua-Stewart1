#include "CargoShip.h"

CargoShip::CargoShip(string newName, string newDate, int newCapacity) : Ship(newName, newDate)
{
	capacity = newCapacity;
}

int CargoShip::getCapacity() const
{
	return capacity;
}

void CargoShip::setCapacity(int newCapacity)
{
	capacity = newCapacity;
}

void CargoShip::print() const
{
	cout << "Ship Name:  " << getName() << endl;
	cout << "Capacity:   " << capacity << endl;
}