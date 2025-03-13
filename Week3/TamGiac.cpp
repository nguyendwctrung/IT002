#include "TamGiac.h"
#include "Diem.h"
#include <iostream>
#include <cmath>

using namespace std;

TamGiac::TamGiac() {}

TamGiac::~TamGiac() {}

void TamGiac::Nhap() {
	int Check;
	do {
		Check = 0;
		cout << "Nhap toa do diem A\n"; A.Nhap();
		cout << "Nhap toa do diem B\n"; B.Nhap();
		cout << "Nhap toa do diem C\n"; C.Nhap();
		if (A.returnHoanh_Do() == B.returnHoanh_Do() == C.returnHoanh_Do()
			|| A.returnTung_Do() == B.returnTung_Do() == C.returnTung_Do()
			|| (A.returnHoanh_Do() == B.returnHoanh_Do() && A.returnTung_Do() == B.returnTung_Do())
			|| (B.returnHoanh_Do() == C.returnHoanh_Do() && B.returnTung_Do() == C.returnTung_Do())
			|| (A.returnHoanh_Do() == C.returnHoanh_Do() && A.returnTung_Do() == C.returnTung_Do())) 
		{
			Check = 1;
			cout << "\nTam giac vua nhap khong ton tai! Hay nhap lai!";
		}
		cout << endl;
	} while (Check);
}

void TamGiac::Xuat() {
	cout << "===================";
	cout << "\nTam giac ABC";
	cout << "\nToa do diem A la: "; A.Xuat();
	cout << "\nToa do diem B la: "; B.Xuat();
	cout << "\nToa do diem C la: "; C.Xuat();
}

void TamGiac::setDiem(Diem a, Diem b, Diem c) {
	A = a;
	B = b;
	C = c;
}

void TamGiac::Tinh_tien(int u, int v) {
	cout << "\nTam giac ABC sau khi tinh tien theo vecto (" << u << ";" << v << ") co toa do A, B, C lan luot la: \n";
	A.TinhTien(u, v); cout << ", ";
	B.TinhTien(u, v); cout << ", ";
	C.TinhTien(u, v);
}

void TamGiac::TrongTam() {
	double x, y;
	x = (A.returnHoanh_Do() + B.returnHoanh_Do() + C.returnHoanh_Do()) / 3;
	y = (A.returnTung_Do() + B.returnTung_Do() + C.returnTung_Do()) / 3;
	cout << "\nTrong tam G cua tam giac ABC: " << "(" << x << ";" << y << ")";
}

void TamGiac::Quay() {
	double GocQuay;
	cout << "\nNhap goc quay: ";
	cin >> GocQuay;
	cout << "\nTam giac ABC quay qua tam O, goc quay " << GocQuay << " do co toa do A, B, C lan luot la: \n";
	A.Quay(GocQuay); cout << ", ";
	B.Quay(GocQuay); cout << ", ";
	C.Quay(GocQuay);
}

void TamGiac::PhongTo() {
	double k; //He so phong to
	cout << "\nNhap he so phong to: ";
	cin >> k;
	A.setDiem(A.returnHoanh_Do() * k, A.returnTung_Do() * k);
	B.setDiem(B.returnHoanh_Do() * k, B.returnTung_Do() * k);
	C.setDiem(C.returnHoanh_Do() * k, C.returnTung_Do() * k);
}

void TamGiac::ThuNho() {
	double k; //He so thu nho
	cout << "\nNhap he so thu nho: ";
	cin >> k;
	A.setDiem(A.returnHoanh_Do() * 1.0/k, A.returnTung_Do() * 1.0/k);
	B.setDiem(B.returnHoanh_Do() * 1.0/k, B.returnTung_Do() * 1.0/k);
	C.setDiem(C.returnHoanh_Do() * 1.0/k, C.returnTung_Do() * 1.0/k);
}