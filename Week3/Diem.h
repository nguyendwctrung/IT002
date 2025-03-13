#pragma once
class Diem
{
private:
	double Hoanh_Do;
	double Tung_Do;
public:
	Diem();
	~Diem();
	void Nhap();
	void Xuat();
	void setDiem(double x, double y);
	double returnHoanh_Do();
	double returnTung_Do();
	void TinhTien(int u, int v);
	void Quay(double GocQuay);
};