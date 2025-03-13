#include "Employee.h"
#include "Officer.h"
#include "Worker.h"
#include <vector>

void Input(vector<Employee*>& list)
{
	int catchKind;
	do {
		cout << "\nChon kieu nhan vien: \n";
		cout << "Nhan 1 de chon nhan vien van phong: \n";
		cout << "Nhan 2 de chon nhan vien san xuat: \n";
		cout << "Nhan 3 de quay tro lai. \n";
		cout << "Press: ";
		cin >> catchKind;
		switch (catchKind) {
		case 1:
			list.push_back(new Officer());
			list[list.size() - 1]->setInfor();
			break;
		case 2:
			list.push_back(new Worker());
			list[list.size() - 1]->setInfor();
			break;
		default:
			break;
		}
	} while (catchKind != 3);
}

void PrintList(vector<Employee*>& list) {
	for (int i = 0; i < list.size(); i++) {
		list[i]->show();
	}
}

int main()
{
	vector<Employee*> listEmployee;
	listEmployee.resize(0);
	int key;
	int n;
	do {
		cout << "\nQuan ly nhan vien: \n";
		cout << "Nhan 1 de nhap thong tin nhan vien.\n";
		cout << "Nhan 2 de xuat thong tin toan bo nhan vien.\n";
		cout << "Nhan 3 de thoat.\n";
		cout << "Press: ";
		cin >> key;
		switch (key) {
		case 1:
			cout << "Nhap so luong nhan vien: ";
			cin >> n;
			for (int i = 0; i < n; i++) {
				Input(listEmployee);
			}
			break;
		case 2:
			PrintList(listEmployee);
			break;
		default:
			break;
		}
	} while (key != 3);
	return 0;
}