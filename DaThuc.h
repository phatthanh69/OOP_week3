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
	DaThuc(int);
	DaThuc(const DaThuc&);
	~DaThuc();
	float TinhGiaTri(float x);
	friend DaThuc operator +(DaThuc, DaThuc);
	friend DaThuc operator -(DaThuc, DaThuc);
	friend istream& operator>>(istream&, DaThuc&);
	friend ostream& operator<<(ostream&, DaThuc&);
};

