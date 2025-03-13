#include "CTime.h"

int main()
{
	CTime time1, time2;

	cout << "Nhap Time 1: " << endl;
	cin >> time1;
	cout << "Time 1 = " << time1 << endl;
	
	cout << "Nhap Time 2: " << endl;
	cin >> time2;
	cout << "Time 2 = " << time2 << endl;
	
	cout << "Cac phep tinh" << endl;
	cout << "\nNhap so giay cong them: " << endl;
	int addSecond;
	cin >> addSecond;
	CTime addTime = time1 + addSecond;
	cout << "Time 1 sau khi cong them = " << addTime << endl;
	CTime subtract = time1 - time2;
	cout << time1 << " - " << time2 << " = " << subtract << endl;
	CTime increaseTime, decreaseTime;
	increaseTime = time1++;
	decreaseTime = time1--;
	cout << "Time 1 sau khi giam 1s = " << decreaseTime << endl;
	cout << "Time 1 sau khi tang 1s = " << increaseTime << endl;
	return 0;
}