#pragma once
#include "Diem.h"
class DaGiac
{
private:
	Diem* A;
	int soDiem;
public:
	DaGiac(int n);
	~DaGiac();
	void Nhap();
	void Xuat();
	void ThuNho(double k);
	void PhongTo(double k);
	void Xoay(double k);
	friend ostream& operator>>(ostream& os, DaGiac& dg);
};

