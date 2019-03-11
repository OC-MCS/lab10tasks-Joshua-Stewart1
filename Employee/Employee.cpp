#include "Employee.h"

Employee::Employee(int empNum, string empName, string empHireDate)
{
	number = empNum;
	name = empName;
	hireDate = empHireDate;
}

int Employee::getNumber() const
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

void Employee::setNumber(int empNum)
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