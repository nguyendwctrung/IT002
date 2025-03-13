#include "CTimeSpan.h"

int main() {
	CTimeSpan time1, time2;
	cout << "Nhap du lieu Time 1 \n";
	cin >> time1;
	cout << "Time 1: " << time1 << endl;
	cout << "Nhap du lieu Time 2 \n";
	cin >> time2;
	cout << "Time 2: " << time2 << endl;

	cout << "So sanh \n";
	cout << time1 << " == " << time2 << ": ";
	(time1 == time2) ? (cout << "True") : (cout << "False");
	cout << endl;
	cout << time1 << " != " << time2 << ": ";
	(time1 != time2) ? (cout << "True") : (cout << "False");
	cout << endl;
	cout << time1 << " > " << time2 << ": ";
	(time1 > time2) ? (cout << "True") : (cout << "False");
	cout << endl;
	cout << time1 << " >= " << time2 << " ";
	(time1 >= time2) ? (cout << "True") : (cout << "False");
	cout << endl;
	cout << time1 << " < " << time2 << " ";
	(time1 < time2) ? (cout << "True") : (cout << "False");
	cout << endl;
	cout << time1 << " <= " << time2 << " ";
	(time1 <= time2) ? (cout << "True") : (cout << "Fase");
	cout << endl;

	return 0;
}