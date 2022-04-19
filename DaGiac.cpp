#include "DaGiac.h"

DaGiac::DaGiac(int n)
{
	this->soDiem = n;
	this->A = new Diem[this->soDiem];
	for (int i = 0; i < n; i++) {
		A[i].SetX(0);
		A[i].SetY(0);
	}

}

DaGiac::~DaGiac()
{
	this->soDiem = 0;
	delete[] this->A;
}

void DaGiac::Nhap()
{
	for (int i = 0; i < soDiem; i++) {
		cout << "Nhap diem thu: " << i + 1;
		cin >> A[i];
	}
}

void DaGiac::Xuat()
{
}

void DaGiac::ThuNho(double k)
{
	for (int i = 0; i < this->soDiem; i++) {
		this->A[i].SetX(this->A[i].GetX() * (1 / k));
		this->A[i].SetX(this->A[i].GetX() * (1 / k));
	}
}


void DaGiac::Xoay(double k)
{
}

void DaGiac::PhongTo(double k)
{
	for (int i = 0; i < this->soDiem; i++) {
		this->A[i].SetX(this->A[i].GetX() * k);
		this->A[i].SetX(this->A[i].GetX() * k);
	}
}

ostream& operator>>(ostream& os, DaGiac& dg)
{
	os << "Da giac co: " << dg.soDiem;
	for (int i = 0; i < dg.soDiem; i++) {
		os << dg.A[i] << " ";
	}return os;
}
