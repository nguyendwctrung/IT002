#include "PhanSo.h"
#include <cmath>

PhanSo::PhanSo() {
	this->tu = 0;
	this->mau = 1;
}

PhanSo::~PhanSo() {}

int UCLN(int a, int b) {
	if (b == 0) {
		return a;
	}
	return UCLN(b, a % b);
}

void PhanSo::ToiGian(PhanSo& ps) {
	int UocChung = UCLN(ps.tu, ps.mau);
	ps.tu = ps.tu / UocChung;
	ps.mau = ps.mau / UocChung;
}

PhanSo PhanSo::operator+ (PhanSo& ps) {
	PhanSo phanso;
	phanso.tu = this->tu * ps.mau + ps.tu * this->mau;
	phanso.mau = this->mau * ps.mau;
	return phanso;
}

PhanSo PhanSo::operator- (PhanSo& ps) {
	PhanSo phanso;
	phanso.tu = this->tu * ps.mau - this->mau * ps.tu;
	phanso.mau = this->mau * ps.mau;
	return phanso;
}

PhanSo PhanSo::operator* (PhanSo& ps) {
	PhanSo phanso;
	phanso.tu = this->tu * ps.tu;
	phanso.mau = this->mau * ps.mau;
	return phanso;
}

PhanSo PhanSo::operator/ (PhanSo& ps) {
	PhanSo phanso;
	phanso.tu = this->tu * ps.mau;
	phanso.mau = this->mau * ps.tu;
	return phanso;
}

istream& operator>> (istream& is, PhanSo& ps) {
	cout << "Nhap tu: ";
	is >> ps.tu;
	cout << "Nhap mau: ";
	is >> ps.mau;
	return is;
}

ostream& operator<< (ostream& os, PhanSo& ps) {
	if (ps.tu == 0) {
		os << "0";
	}
	else if ((ps.tu > 0 && ps.mau > 0) || (ps.tu < 0 && ps.mau < 0)) {
		os << abs(ps.tu) << "/" << abs(ps.mau);
	}
	else if ((ps.tu > 0 && ps.mau < 0) || (ps.tu < 0 && ps.mau > 0)) {
		os << "-" << abs(ps.tu) << "/" << abs(ps.mau);
	}
	return os;
}

bool PhanSo::operator== (PhanSo& ps) {
	if ((this->tu == ps.tu) && (this->mau == ps.mau)) {
		return true;
	}
	return false;
}

bool PhanSo::operator!= (PhanSo& ps) {
	if ((this->tu != ps.tu) || (this->mau != ps.mau)) {
		return true;
	}
	return false;
}

bool PhanSo::operator> (PhanSo& ps) {
	if ((this->tu * ps.mau) > (this->mau * ps.tu)) {
		return true;
	}
	return false;
}

bool PhanSo::operator>= (PhanSo& ps) {
	if ((this->tu * ps.mau) >= (this->mau * ps.tu)) {
		return true;
	}
	return false;
}

bool PhanSo::operator< (PhanSo& ps) {
	if ((this->tu * ps.mau) < (this->mau * ps.tu)) {
		return true;
	}
	return false;
}

bool PhanSo::operator<= (PhanSo& ps) {
	if ((this->tu * ps.mau) <= (this->mau * ps.tu)) {
		return true;
	}
	return false;
}