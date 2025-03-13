#include "PhanSo.h"

int main()
{
	PhanSo p1, p2;
	cout << "Nhap phan so thu nhat " << endl;
	cin >> p1;
	cout << "Phan so thu nhat: " << p1 << endl;
	cout << "Nhap phan so thu hai " << endl;
	cin >> p2;
	cout << "Phan so thu hai: " << p2 << endl;

	cout << "\nCac phep tinh phan so" << endl;

	PhanSo Tong = p1 + p2;
	Tong.ToiGian(Tong);
	cout << p1 << " + " << p2 << " = " << Tong << endl;

	PhanSo Hieu = p1 - p2;
	Hieu.ToiGian(Hieu);
	cout << p1 << " - " << p2 << " = " << Hieu << endl;

	PhanSo Tich = p1 * p2;
	Tich.ToiGian(Tich);
	cout << p1 << " * " << p2 << " = " << Tich << endl;

	PhanSo Thuong = p1 / p2;
	Thuong.ToiGian(Thuong);
	cout << p1 << " / " << p2 << " = " << Thuong << endl;

	cout << "\nSo sanh hai phan so" << endl;

	cout << p1 << " == " << p2 << endl;
	(p1 == p2) ? (cout << "True") : (cout << "False");
	cout << "\n";
	cout << p1 << " != " << p2 << endl;
	(p1 != p2) ? (cout << "True") : (cout << "False");
	cout << "\n";
	cout << p1 << " > " << p2 << endl;
	(p1 > p2) ? (cout << "True") : (cout << "False");
	cout << "\n";
	cout << p1 << " >= " << p2 << endl;
	(p1 >= p2) ? (cout << "True") : (cout << "False");
	cout << "\n";
	cout << p1 << " < " << p2 << endl;
	(p1 < p2) ? (cout << "True") : (cout << "False");
	cout << "\n";
	cout << p1 << " <= " << p2 << endl;
	(p1 <= p2) ? (cout << "True") : (cout << "False");
	cout << "\n";
	return 0;
}