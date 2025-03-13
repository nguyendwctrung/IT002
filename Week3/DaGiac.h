#pragma once
#include "Diem.h"

class DaGiac
{
private:
	int SoDinh;
	Diem* Da_giac = new Diem[SoDinh];
public:
	DaGiac();
	~DaGiac();
	void Nhap();
	void Xuat();
	void Tinh_Tien(int u, int v);
	void Quay();
	void Phong_to();
	void Thu_nho();
};

