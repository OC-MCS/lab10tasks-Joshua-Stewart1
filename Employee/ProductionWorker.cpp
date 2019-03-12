#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(string empNum, string empName, string empHireDate, int empShift, double empRate)
	: Employee(empNum, empName, empHireDate)
{
	shift = empShift;
	hourlyRate = empRate;
}

int ProductionWorker::getShift() const
{
	return shift;
}

double ProductionWorker::getHourlyRate() const
{
	return hourlyRate;
}

void ProductionWorker::setShift(int empShift)
{
	shift = empShift;
}

void ProductionWorker::setHourlyRate(double empRate)
{
	hourlyRate = empRate;
}

