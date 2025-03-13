#pragma once
#include "Employee.h"

class Worker : public Employee 
{
private:
	int baseSalary;
	int numProduct;
public:
	Worker();
	Worker(const string name, string dayOfBirth, int baseSalary, int numProduct);
	virtual void setSalary();
	int getBaseSalary();
	void setBaseSalary(int baseSalary);
	int getNumProduct();
	void setNumProduct(int numProduct);
	void show();
	void setInfor();
};

