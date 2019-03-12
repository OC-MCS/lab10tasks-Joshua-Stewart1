#include "Employee.h"

Employee::Employee(string empNum, string empName, string empHireDate)
{
	number = empNum;
	name = empName;
	hireDate = empHireDate;
}

string Employee::getNumber() const
{
	return number;
}

string Employee::getName() const
{
	return name;
}

string Employee::getDate() const
{
	return hireDate;
}

void Employee::setNumber(string empNum)
{
	number = empNum;
}

void Employee::setName(string empName)
{
	name = empName;
}

void Employee::setDate(string empHireDate)
{
	hireDate = empHireDate;
}