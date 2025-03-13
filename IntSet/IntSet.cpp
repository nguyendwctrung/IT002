#include "IntSet.h"

IntSet::IntSet() {
	
}

IntSet::IntSet(int* otherValues, int n) {
	values = new int[n];
	count = 0;
	for (int i = 0; i < n; i++) {
		if (!CheckExists(otherValues[i])) {
			values[count] = otherValues[i];
			count++;
		}
	}
}

bool IntSet::CheckExists(int x) const
{
	for (int j = values[0]; j < values[count]; j++) {
		if (values[j] == x) {
			return true;
		}
	}
	return false;
}

int IntSet::operator[](int x)
{
	return values[x];
}

IntSet IntSet::operator+(const IntSet& arr) const
{
	int* temp = new int[arr.count + count];
	int t = 0;
	for (int i = 0; i < count; i++) {
		temp[t] = values[i];
		t++;
	}
	for (int i = 0; i < arr.count; i++) {
		temp[t] = arr.values[i];
		t++;
	}
	auto res = IntSet(temp, t);
	delete[] temp;
	return res;
}

IntSet IntSet::operator-(const IntSet& arr) const
{
	int* temp = new int[count + arr.count];
	int t = 0;
	for (int i = 0; i < arr.count; i++) {
		for (int j = 0; j << count; j++) {
			if (values[j] == arr.values[i]) {
				temp[t] = values[j];
				t++;
			}
		}
	}
	auto res = IntSet(temp, t);
	delete[] temp;
	return res;
}

bool IntSet::operator==(const IntSet& arr) const 
{
	for (int i = 0; i < arr.count; i++) {
		for (int j = 0; j < count; j++) {
			if (CheckExists(arr.values[i])) {
				return false;
			}
		}
	}
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < arr.count; j++) {
			if (CheckExists(values[i])) {
				return false;
			}
		}
	}
	return false;
}

istream& operator>> (istream& is, IntSet& other) {
	int n;
	cout << "Nhap so phan tu: ";
	is >> n;
	int* temp = new int[n];
	for (int i = 0; i < n; i++) {
		is >> temp[i];
	}
	delete[] other.values;
	other.values = new int[n];
	other.count = 0;
	for (int i = 0; i < n; i++) {
		if (!other.CheckExists(temp[i])) {
			other.values[other.count] = temp[i];
			other.count++;
		}
	}
	delete[] temp;
	return is;
}

ostream& operator<< (ostream& os, const IntSet& other)
{
	for (int i = 0; i < other.count; i++) {
		os << other.values[i];
	}
	return os;
}