#include "ShiftSupervisor.h"

ShiftSupervisor::ShiftSupervisor(string empNum, string empName, string empHireDate, double empSalary, double empYearlyBonus)
	: Employee(empNum, empName, empHireDate)
{
	salary = empSalary;
	yearlyBonus = empYearlyBonus;
}

double ShiftSupervisor::getSalary() const
{
	return salary;
}

double ShiftSupervisor::getYearlyBonus() const
{
	return yearlyBonus;
}

void ShiftSupervisor::setSalary(double empSalary)
{
	salary = empSalary;
}

void ShiftSupervisor::setYearlyBonus(double empYearlyBonus)
{
	yearlyBonus = empYearlyBonus;
}