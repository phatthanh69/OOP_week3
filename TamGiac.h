#pragma once
#include "Diem.h"
using namespace std;
class TamGiac
{
private:
	Diem A, B, C;
public:
	TamGiac();
	TamGiac(Diem, Diem, Diem);
	void TinhTienDiem(float, float);
	void PhongTo(float);
	void Quay(float);
	friend ostream& operator<<(ostream&, TamGiac&);
	friend istream& operator>>(istream&, TamGiac&);
};
