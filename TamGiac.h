#pragma once
#include "Diem.h"
class TamGiac
{
private:
	Diem* A;
public:
	TamGiac();
	void TinhTienDiem(double a, double b);
	void Nhap();
	void PhongTo(double k);
	void ThuNho(double k);
	void Xoay();
	friend ostream& operator<<(ostream& os, TamGiac& tg);
};
