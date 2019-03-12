#pragma once

#include "Employee.h"

class ShiftSupervisor : public Employee
{
private:
	double salary;
	double yearlyBonus;
public:
	ShiftSupervisor(string empNum, string empName, string empHireDate, double empSalary, double empYearlyBonus);
	double getSalary() const;
	double getYearlyBonus() const;
	void setSalary(double empSalary);
	void setYearlyBonus(double empYearlyBonus);
};