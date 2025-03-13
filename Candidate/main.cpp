#include "Candidate.h"
#include "TestCandidate.h"
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Nhap so thi sinh: ";
	cin >> n;
	Candidate a[100];
	TestCandidate b;
	b.NhapDulieu(n, a);
	cout << "\nThong tin thi sinh co tong diem lon hon 15: ";
	cout << "\n===================\n";
	b.XuatDulieu(n, a);
	return 0;
}