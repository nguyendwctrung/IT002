#pragma once
#include <iostream>

using namespace std;

class CTimeSpan
{
private:
	int hour;
	int minute;
	int second;
public:
	CTimeSpan();
	~CTimeSpan();
	long sumOfTime();
	CTimeSpan operator+ (CTimeSpan&);
	CTimeSpan operator- (CTimeSpan&);
	bool operator== (CTimeSpan&);
	bool operator!= (CTimeSpan&);
	bool operator> (CTimeSpan&);
	bool operator>= (CTimeSpan&);
	bool operator< (CTimeSpan&);
	bool operator<= (CTimeSpan&);
	friend istream& operator>> (istream& is, CTimeSpan& data);
	friend ostream& operator<< (ostream& os, CTimeSpan& data);
};

