#pragma once

#include <iostream>

using namespace std;

class SoPhuc
{
private:
	float thuc;
	float ao;
public:
	SoPhuc();
	~SoPhuc();
	SoPhuc operator+ (SoPhuc&);
	SoPhuc operator- (SoPhuc&);
	/*SoPhuc operator* (SoPhuc&);
	SoPhuc operator/ (SoPhuc&);
	bool operator== (SoPhuc&);
	bool operator!= (SoPhuc&);
	bool operator> (SoPhuc&);
	bool operator>= (SoPhuc&);
	bool operator< (SoPhuc&);
	bool operator<= (SoPhuc&);*/
	friend istream& operator>> (istream &is, SoPhuc &sp);
	friend ostream& operator<< (ostream &os, SoPhuc &sp);
};

