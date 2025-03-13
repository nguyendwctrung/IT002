#include "DaGiac.h"
#include "Diem.h"
#include <iostream>
#include <cmath>

using namespace std;

DaGiac::DaGiac() {}

DaGiac::~DaGiac() {}

void DaGiac::Nhap() {
	int KiemTra;
	do {
		cout << "Nhap so dinh cua da giac: ";
		KiemTra = 0;
		cin >> SoDinh;
		if (SoDinh < 3) {
			KiemTra = 1;
			cout << "So dinh nhap vao khong hop le! Hay nhap lai!" << endl;
		}
	} while (KiemTra);

	for (int i = 0; i < SoDinh; i++) {
		cout << "\nNhap dinh thu " << i + 1 << ": ";
		Da_giac[i].Nhap();
	}
}

void DaGiac::Xuat() {
	cout << "Toa do cac dinh da giac la: \n";
	for (int i = 0; i < SoDinh; i++) {
		Da_giac[i].Xuat();
		cout << " ";
	}
	cout << endl;
}

void DaGiac::Tinh_Tien(int u, int v) {
	cout << "\nToa do da giac sau khi tinh tien theo vecto (" << u << ";" << v << ") la: \n";
	for (int i = 0; i < SoDinh; i++) {
		Da_giac[i].TinhTien(u, v);
		cout << " ";
	}
	cout << endl;
}

void DaGiac::Quay() {
	Diem quay;
	cout << "\nNhap toa do tam: ";
	quay.Nhap();
	double Gocquay;
	cout << "\nNhap goc quay: ";
	cin >> Gocquay;
	for (int i = 0; i < SoDinh; i++) {
		Da_giac[i].Quay(Gocquay);
	}
}