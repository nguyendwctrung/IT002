#include "Employee.h"

Employee::Employee() {
	this->name = "";
	this->birthDay = "0";
	this->salary = 0;
}

Employee::Employee(const string name, string birthDay) {
	this->name = name;
	this->birthDay = birthDay;
}

Employee::~Employee() {}

int Employee::getSalary() {
	return salary;
}

void Employee::setInfor() {
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, name);
	cout << "Nhap ngay sinh: ";
	cin >> birthDay;
}

void Employee::show() {
	cout << "======================" << endl;
	cout << "Ho ten: " << name << endl;
	cout << "Ngay sinh: " << birthDay << endl;
	cout << "Luong: " << salary << endl;
}