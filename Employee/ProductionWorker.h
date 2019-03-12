#pragma once
#include "Employee.h"

class ProductionWorker : public Employee
{
private:
	int shift;
	double hourlyRate;
public:
	ProductionWorker(string empNum, string empName, string empHireDate, int empShift, double empRate);
	int getShift() const;
	double getHourlyRate() const;
	void setShift(int empShift);
	void setHourlyRate(double empRate);
};

