#include "Diem.h"

Diem::Diem()
{
	SetX(0);
	SetY(0);
}

Diem::Diem(float a, float b)
{
	SetX(a);
	SetY(b);
}

Diem::~Diem()
{
}

void Diem::SetX(float a)
{
	x = a;
}

void Diem::SetY(float b)
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

void Diem::TinhTien(float a, float b)
{
	SetX(GetX() + a);
	SetY(GetY() + b);
}

void Diem::Quay(float rad){
    x=x*cos(rad)-y*sin(rad);
    y=y*sin(rad)+x*cos(rad);
}

Diem Diem::Vector(Diem a){
    Diem t;
    t.SetX(a.GetX()-x);
    t.SetY(a.GetY()-y);
    return t;
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
