#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Diem
{
private:
	int x;
	int y;
public:
	Diem();
	Diem(float a, float b);
	~Diem();
	Diem Vector(Diem);
	void SetX(float a);
	void SetY(float b);
	int GetX();
	int GetY();
	void TinhTien(float a, float b);
	void Quay(float rad);
	friend istream& operator>>(istream& is, Diem& d);
	friend ostream& operator<<(ostream& os, Diem& d);
};