#include "DaGiac.h"

DaGiac::DaGiac()
{
	soDiem = 0;
	A = NULL;
}

DaGiac::DaGiac(int n)
{
	soDiem = n;
	A = new Diem[n + 1];
}

DaGiac::~DaGiac()
{
	delete[] A;
}


void DaGiac::ThuNho(float k)
{
	for (int i = 0; i < this->soDiem; i++) {
		this->A[i].SetX(this->A[i].GetX() * (1 / k));
		this->A[i].SetX(this->A[i].GetX() * (1 / k));
	}
}


void DaGiac::Xoay(float rad)
{
	for (int i = 0; i < soDiem; i++) {
		A[i].Quay(rad);
	}
}

void DaGiac::TinhTien(float x, float y)
{
	for (int i = 0; i < soDiem; i++)
		A[i].TinhTien(x, y);
}

void DaGiac::PhongTo(float k)
{
	for (int i = 0; i < this->soDiem; i++) {
		this->A[i].SetX(this->A[i].GetX() * k);
		this->A[i].SetX(this->A[i].GetX() * k);
	}
}

ostream& operator<<(ostream& os, DaGiac& dg)
{
	os << "Da giac co: " << dg.soDiem;
	for (int i = 0; i < dg.soDiem; i++) {
		os << dg.A[i] << " ";
	}return os;
}

istream& operator>>(istream& is, DaGiac& dg)
{
	cout << "nhap so canh cua da giac: ";
	is >> dg.soDiem;
	dg.A = new float[dg.soDiem + 1];
	for (int i = 0; i < dg.soDiem; i++) {
		cout << "canh thu " << i + 1 << ": ";
		cin >> dg.A[i];
	} return is;
}

