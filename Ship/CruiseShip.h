#pragma once

#include "Ship.h"

class CruiseShip : public Ship
{
private:
	int passengers;
public:
	CruiseShip(string newName, string newDate, int newPassengers);
	int getPassengers() const;
	void setPassengers(int newPassengers);
	void print() const;
};