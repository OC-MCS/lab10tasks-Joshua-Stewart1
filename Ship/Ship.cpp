#include "Ship.h"

Ship::Ship(string newName, string newDate)
{
	name = newName;
	date = newDate;
}

string Ship::getName() const
{
	return name;
}

string Ship::getDate() const
{
	return date;
}

void Ship::setName(string newName)
{
	name = newName;
}

void Ship::setDate(string newDate) 
{
	date = newDate;
}

void Ship::print() const
{
	cout << "Ship Name:  " << name << endl;
	cout << "Year Built: " << date << endl;
}