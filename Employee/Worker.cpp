#include "Worker.h"
#include "Employee.h"

Worker::Worker() {
	this->baseSalary = 0;
	this->numProduct = 0;
}

Worker::Worker(const string name, string birthDay, int baseSalary, int numProduct) : Employee(name, birthDay) {
	this->baseSalary = baseSalary;
	this->numProduct = numProduct;
}

void Worker::setSalary() {
	salary = baseSalary + numProduct * 5000;
}

void Worker::setBaseSalary(int baseSalary) {
	this->baseSalary = baseSalary;
}

int Worker::getBaseSalary() {
	return baseSalary;
}

void Worker::setNumProduct(int numProduct) {
	this->numProduct = numProduct;
}

int Worker::getNumProduct() {
	return numProduct;
}

void Worker::show() {
	Employee::show();
}

void Worker::setInfor() {
	Employee::setInfor();
	cout << "Luong co ban: ";
	int base_Salary;
	cin >> base_Salary;
	setBaseSalary(base_Salary);
	cout << "So san pham: ";
	int num_Product;
	cin >> num_Product;
	setNumProduct(num_Product);
	Worker::setSalary();
}