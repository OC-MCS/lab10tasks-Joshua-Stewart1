#pragma once
#include <string>
using namespace std;

class Employee
{
private:
	string name;
	string hireDate;
	int number;
public:
	Employee(int empNum, string empName, string empHireDate);
	int getNumber() const;
	string getName() const;
	string getDate() const;
	void setNumber(int empNum);
	void setName(string empName);
	void setDate(string empHireDate);
};

