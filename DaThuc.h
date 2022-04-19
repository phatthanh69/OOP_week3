#pragma once
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

class DaThuc
{
private:
	int bac;
	float* heso;
public:
	DaThuc();
	DaThuc(float a[], int n);
	DaThuc(const DaThuc& f);
	~DaThuc();
	friend ostream operator<<(ostream& os, DaThuc& dt);
	friend istream operator>>(istream& is, DaThuc& dt);
	DaThuc& operator=(const DaThuc& f);
	bool operator==(const DaThuc& f);
	bool operator<(const DaThuc& f);
	bool operator>(const DaThuc& f);
	bool operator<=(const DaThuc& f);
	bool operator>=(const DaThuc& f);
	DaThuc operator +(DaThuc&);
	DaThuc operator -(DaThuc&);
	DaThuc operator *(DaThuc&);
	DaThuc operator /(DaThuc&);
};

