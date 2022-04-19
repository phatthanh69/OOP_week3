#include "Diem.h"

Diem::Diem()
{
	SetX(0);
	SetY(0);
}

Diem::Diem(int a, int b)
{
	SetX(a);
	SetY(b);
}

Diem::~Diem()
{
}

void Diem::SetX(int a)
{
	x = a;
}

void Diem::SetY(int b)
{
	y = b;
}

int Diem::GetX()
{
	return x;
}

int Diem::GetY()
{
	return y;
}

void Diem::TinhTien(int a, int b)
{
	SetX(GetX() + a);
	SetY(GetY() + b);
}

istream& operator>>(istream& is, Diem& d)
{
	is >> d.x >> d.y;
	return is;
}

ostream& operator<<(ostream& os, Diem& d)
{
	os << "( " << d.GetX() << " , " << d.GetY() << " )";
	return os;
}
