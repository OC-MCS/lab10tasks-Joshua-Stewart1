#pragma once

#include <iostream>
#include <string>
using namespace std;

class Ship
{
private:
	string name;
	string date;
public:
	Ship(string newName, string newDate);
	string getName() const;
	string getDate() const;
	void setName(string newName);
	void setDate(string newDate);
	virtual void print() const;
};