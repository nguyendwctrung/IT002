#include "CTimeSpan.h"

CTimeSpan::CTimeSpan() {
	this->hour = 0;
	this->minute = 0;
	this->second = 0;
}

CTimeSpan::~CTimeSpan() {}

istream& operator>> (istream& is, CTimeSpan& data) {
	cout << "Nhap gio: ";
	is >> data.hour;
	cout << "Nhap phut: ";
	is >> data.minute;
	cout << "Nhap giay: ";
	is >> data.second;
	return is;
}

ostream& operator<< (ostream& os, CTimeSpan& data) {
	while (data.second >= 60) {
		data.second = data.second - 60;
		data.minute++;
	}
	while (data.minute >= 60) {
		data.minute = data.minute - 60;
		data.hour++;
	}
	os << data.hour << "h" << data.minute << "m" << data.second << "s";
	return os;
}

long CTimeSpan::sumOfTime() {
	return hour * 3600 + minute * 60 + second;
}

bool CTimeSpan::operator== (CTimeSpan& data) {
	if (this->sumOfTime() == data.sumOfTime()) {
		return true;
	}
	return false;	
}

bool CTimeSpan::operator!= (CTimeSpan& data) {
	if (this->sumOfTime() != data.sumOfTime()) {
		return true;
	}
	return false;
}

bool CTimeSpan::operator> (CTimeSpan& data) {
	if (this->sumOfTime() > data.sumOfTime()) {
		return true;
	}
	return false;
}

bool CTimeSpan::operator>= (CTimeSpan& data) {
	if (this->sumOfTime() >= data.sumOfTime()) {
		return true;
	}
	return false;
}

bool CTimeSpan::operator< (CTimeSpan& data) {
	if (this->sumOfTime() < data.sumOfTime()) {
		return true;
	}
	return false;
}

bool CTimeSpan::operator<= (CTimeSpan& data) {
	if (this->sumOfTime() <= data.sumOfTime()) {
		return true;
	}
	return false;
}