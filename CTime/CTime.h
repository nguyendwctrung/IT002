#pragma once
#include <iostream>

using namespace std;

class CTime
{
private:
	int hour;
	int minute;
	int second;
public:
	CTime();
	~CTime();
	CTime operator+ (int&);
	CTime operator- (CTime& time);
	CTime operator++ (int);
	CTime operator-- (int);
	friend istream& operator>> (istream& is, CTime& time);
	friend ostream& operator<< (ostream& is, CTime& time);
};