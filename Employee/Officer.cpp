#include "Officer.h"
#include "Employee.h"


Officer::Officer() {
	this->workingDays = 0;
}

Officer::Officer(const string name, string birthDay, int workingDays) : Employee(name, birthDay) {
	this->workingDays = workingDays;
}

void Officer::setSalary() {
	salary = workingDays * 100000;
}

void Officer::setWorkingDays(int workingDays) {
	this->workingDays = workingDays;
}

int Officer::getWorkingDays() {
	return workingDays;
}

void Officer::setInfor() {
	Employee::setInfor();
	cout << "So ngay lam viec: ";
	int workDays;
	cin >> workDays;
	setWorkingDays(workDays);
	Officer::setSalary();
}

void Officer::show() {
	Employee::show();
}
