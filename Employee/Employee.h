#pragma once
#include <string>
using namespace std;

class Employee
{
private:
	string name;
	string hireDate;
	string number;
public:
	Employee(string empNum, string empName, string empHireDate);
	string getNumber() const;
	string getName() const;
	string getDate() const;
	void setNumber(string empNum);
	void setName(string empName);
	void setDate(string empHireDate);
};

