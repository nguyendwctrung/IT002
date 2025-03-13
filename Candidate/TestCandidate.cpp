#include "TestCandidate.h"
#include "Candidate.h"
#include <iostream>

using namespace std;

void TestCandidate::NhapDulieu(int n, Candidate x[1000]) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap du lieu thi sinh thu " << i + 1 << endl;
		x[i].Nhap();
	}
}

void TestCandidate::XuatDulieu(int n, Candidate x[1000]) {
	for (int i = 0; i < n; i++) {
		if (x[i].over15() == true) {
			x[i].Xuat();
		}
	}
}