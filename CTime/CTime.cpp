#include "CTime.h"

CTime::CTime() {
	this->hour = 0;
	this->minute = 0;
	this->second = 0;
}

CTime::~CTime() {}

istream& operator>> (istream& is, CTime& time) {
	cout << "Nhap gio: ";
	is >> time.hour;
	cout << "Nhap phut: ";
	is >> time.minute;
	cout << "Nhap giay: ";
	is >> time.second;
	return is;
}

ostream& operator<< (ostream& os, CTime& time) {
	while (time.second >= 60) {
		time.second = time.second - 60;
		time.minute++;
	}
	while (time.minute >= 60) {
		time.minute = time.minute - 60;
		time.hour++;
	}
	while (time.hour >= 24) {
		time.hour = time.hour - 24;
	}
	os << time.hour << "h" << time.minute << "m" << time.second << "s";
	return os;
}

CTime CTime::operator+ (int& time) {
	CTime temp;
	temp.hour = this->hour;
	temp.minute = this->minute;
	temp.second = this->second;
	temp.second = temp.second + time;
	return temp;
}
CTime CTime::operator- (CTime& time) {
	CTime temp;
	temp.hour = this->hour - time.hour;
	temp.minute = this->minute - time.minute;
	temp.second = this->second - time.second;
	while (temp.second <= 0) {
		temp.second = 60 + temp.second;
		temp.minute--;
	}
	while (temp.minute <= 0) {
		temp.minute = 60 + temp.minute;
		temp.hour--;
	}
	if (temp.hour <= 0) {
		temp.hour = 0;
	}
	return temp;
}

CTime CTime::operator++ (int time) {
	second++;
	return *this;
}

CTime CTime::operator-- (int time) {
	second--;
	if (second == 0) {
		second = 59;
		minute--;
	} if (minute == 0) {
		minute = 59;
		hour--;
	}
	if (hour <= 0) {
		hour = 0;
	}
	return *this;
}