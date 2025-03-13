#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
	string name;
	string birthDay;
protected:
	int salary;
public:
	Employee();
	Employee(const string name, string birthDay);
	virtual ~Employee();
	int getSalary();
	virtual void setSalary() = 0;
	virtual void show();
	virtual void setInfor();
};

