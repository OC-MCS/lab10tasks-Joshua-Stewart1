// main goes here
#include <iostream>
using namespace std;
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"

int main()
{
	ProductionWorker myWorker("1245970", "Steven", "01/17/19", 1, 9.25);

	cout << "Employee Data" << endl;
	cout << "-------------" << endl;
	cout << "Employee Number: " << myWorker.getNumber() << endl;
	cout << "Name:            " << myWorker.getName() << endl;
	cout << "Date Hired:      " << myWorker.getDate() << endl;
	cout << "Hourly Pay Rate: " << myWorker.getHourlyRate() << endl;
	cout << "Shift Slot:      " << myWorker.getShift() << endl;

	myWorker.setNumber("000000");
	myWorker.setName("Phil");
	myWorker.setDate("03/11/19");
	myWorker.setHourlyRate(0.25);
	myWorker.setShift(2);

	cout << endl;
	cout << "-------------" << endl;
	cout << "Employee Number: " << myWorker.getNumber() << endl;
	cout << "Name:            " << myWorker.getName() << endl;
	cout << "Date Hired:      " << myWorker.getDate() << endl;
	cout << "Hourly Pay Rate: " << myWorker.getHourlyRate() << endl;
	cout << "Shift Slot:      " << myWorker.getShift() << endl;

	ShiftSupervisor mySupervisor("01234567", "Jesus", "12/25/00", 1200, 300);

	cout << endl;
	cout << "-------------" << endl;
	cout << "Employee Number: " << mySupervisor.getNumber() << endl;
	cout << "Name:            " << mySupervisor.getName() << endl;
	cout << "Date Hired:      " << mySupervisor.getDate() << endl;
	cout << "Salary Payment:  " << mySupervisor.getSalary() << endl;
	cout << "Alotted Bonus:   " << mySupervisor.getYearlyBonus() << endl;

	mySupervisor.setNumber("0000013");
	mySupervisor.setName("Josh");
	mySupervisor.setDate("09/25/99");
	mySupervisor.setSalary(3000.02);
	mySupervisor.setYearlyBonus(1000.25);

	cout << endl;
	cout << "-------------" << endl;
	cout << "Employee Number: " << mySupervisor.getNumber() << endl;
	cout << "Name:            " << mySupervisor.getName() << endl;
	cout << "Date Hired:      " << mySupervisor.getDate() << endl;
	cout << "Salary Payment:  " << mySupervisor.getSalary() << endl;
	cout << "Alotted Bonus:   " << mySupervisor.getYearlyBonus() << endl;

	return 0;
}