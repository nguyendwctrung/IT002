#include "Diem.h"
#include <iostream>
using namespace std;

Diem::Diem() {}

Diem::~Diem() {}

void Diem::setDiem(double x, double y) {
	Hoanh_Do = x;
	Tung_Do = y;
}

double Diem::returnHoanh_Do() {
	return Hoanh_Do;
}

double Diem::returnTung_Do() {
	return Tung_Do;
}

void Diem::Nhap() {
	cout << "\nNhap hoanh do x: ";
	cin >> this->Hoanh_Do;
	cout << "Nhap tung do y: ";
	cin >> this->Tung_Do;
}

void Diem::Xuat() {
	cout << "(" << Hoanh_Do << ";" << Tung_Do << ")";
}

void Diem::TinhTien(int u, int v) {
	Diem Diem_Tinh_Tien;
	Diem_Tinh_Tien.Hoanh_Do = Hoanh_Do + u;
	Diem_Tinh_Tien.Tung_Do = Tung_Do + v;
	cout << "(" << Diem_Tinh_Tien.Hoanh_Do << ";" << Diem_Tinh_Tien.Tung_Do << ")";
}

void Diem::Quay(double GocQuay) {
	Diem DiemQuay;
	DiemQuay.Hoanh_Do = Hoanh_Do;
	DiemQuay.Tung_Do = Tung_Do;
	double Ban_kinh = sqrt(pow(DiemQuay.Hoanh_Do, 2) + pow(DiemQuay.Tung_Do, 2));
	DiemQuay.Hoanh_Do = Ban_kinh * cos(GocQuay);
	DiemQuay.Tung_Do = Ban_kinh * sqrt(1 - pow(cos(GocQuay), 2));
	cout << "(" << DiemQuay.Hoanh_Do << ";" << DiemQuay.Tung_Do << ")";
}