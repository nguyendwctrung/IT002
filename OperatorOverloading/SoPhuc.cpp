#include "SoPhuc.h"

SoPhuc::SoPhuc() {
	this->thuc = 0;
	this->ao = 0;
}

SoPhuc::~SoPhuc() {}

istream &operator>> (istream &is, SoPhuc& sp) {
	cout << "Nhap phan thuc: ";
	is >> sp.thuc;
	cout << "Nhap phan ao: ";
	is >> sp.ao;
	return is;
}

ostream &operator<< (ostream& os, SoPhuc& sp) {
	if (sp.thuc == 0 && sp.ao == 0) {
		os << "0";
	}
	else if (sp.thuc != 0 && sp.ao == 0) {
		os << sp.thuc;
	}
	else if (sp.thuc == 0 && sp.ao != 0) {
		os << sp.ao << "i";
	}
	else {
		if (sp.ao > 0) {
			os << sp.thuc << " + " << sp.ao << "i";
		}
		else {
			os << sp.thuc << " - " << abs(sp.ao) << "i";
		}
	}
	return os;
}

SoPhuc SoPhuc::operator+(SoPhuc& sp) {
	SoPhuc soPhuc;
	soPhuc.thuc = this->thuc + sp.thuc;
	soPhuc.ao = this->ao + sp.ao;
	return soPhuc;
}

SoPhuc SoPhuc::operator-(SoPhuc& sp) {
	SoPhuc soPhuc;
	soPhuc.thuc = this->thuc - sp.thuc;
	soPhuc.ao = this->ao - sp.ao;
	return soPhuc;
}

