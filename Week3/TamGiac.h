#pragma once
#include "Diem.h"

class TamGiac
{
private:
	Diem A, B, C;
public:
	TamGiac();
	~TamGiac();
	void Nhap();
	void Xuat();
	void setDiem(Diem, Diem, Diem);
	void Tinh_tien(int u, int v);
	void TrongTam();
	void Quay();
	void PhongTo();
	void ThuNho();
};