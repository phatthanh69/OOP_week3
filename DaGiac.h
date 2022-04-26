#pragma once
#include "Diem.h"
class DaGiac
{
private:
	Diem* A;
	int soDiem;
public:
	DaGiac();
	DaGiac(int);
	~DaGiac();
	void ThuNho(float);
	void PhongTo(float);
	void Xoay(float);
	void TinhTien(float, float);
	friend ostream& operator<<(ostream&, DaGiac&);
	friend istream& operator>>(istream&, DaGiac&);
};

