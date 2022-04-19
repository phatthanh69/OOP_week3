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
	Diem(int a, int b);
	~Diem();
	void SetX(int a);
	void SetY(int b);
	int GetX();
	int GetY();
	void TinhTien(int a, int b);
	friend istream& operator>>(istream& is, Diem& d);
	friend ostream& operator <<(ostream& os, Diem& d);
};

