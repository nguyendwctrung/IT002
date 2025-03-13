#pragma once

#include <iostream>

using namespace std;

class PhanSo
{
private:
	int tu;
	int mau;
public:
	PhanSo();
	~PhanSo();
	void ToiGian(PhanSo&);
	PhanSo operator+ (PhanSo&);
	PhanSo operator- (PhanSo&);
	PhanSo operator* (PhanSo&);
	PhanSo operator/ (PhanSo&);
	bool operator== (PhanSo&);
	bool operator!= (PhanSo&);
	bool operator> (PhanSo&);
	bool operator>= (PhanSo&);
	bool operator< (PhanSo&);
	bool operator<= (PhanSo&);
	friend istream& operator>> (istream& is, PhanSo& ps);
	friend ostream& operator<< (ostream& os, PhanSo& ps);
};