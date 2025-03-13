#pragma once

#include <iostream>

using namespace std;

class IntSet
{
private:
	int* values;
	int count;
public:
	IntSet();
	IntSet(int*, int);
	bool CheckExists(int) const;
	friend istream& operator>> (istream&, IntSet&);
	friend ostream& operator<< (ostream&, const IntSet&);
	int operator[] (int);
	IntSet operator+ (const IntSet&) const;
	IntSet operator- (const IntSet&) const;
	bool operator== (const IntSet&) const;
};

