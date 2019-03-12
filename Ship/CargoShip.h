#pragma once

#include "Ship.h"

class CargoShip : public Ship
{
private:
	int capacity;
public:
	CargoShip(string newName, string newDate, int newCapacity);
	int getCapacity() const;
	void setCapacity(int newCapacity);
	void print() const;
};