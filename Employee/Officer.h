#pragma once
#include "Employee.h"

class Officer : public Employee
{
private:
	int workingDays;
public:
	Officer();
	Officer(const string name, string birthDay, int workingDays);
	virtual void setSalary();
	void setWorkingDays(int workingDays);
	int getWorkingDays();
	void setInfor();
	void show();
};

