#include "DaThuc.h"

DaThuc::DaThuc(float a[], int n)
{
}

DaThuc::DaThuc(const DaThuc& f)
{
	bac = f.bac;
	this->heso = new float[bac + 1];
	for (int i = 0; i <= bac; i++) {
		heso[i] = f[i];
	}
}

DaThuc::~DaThuc()
{
	delete[] heso;
}

void DaThuc::nhap()
{
}
