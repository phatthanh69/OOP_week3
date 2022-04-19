#include "TamGiac.h"

TamGiac::TamGiac()
{
	this->A = new Diem[3];
	for (int i = 0; i < 3; i++) {
		this->A[i].SetX(0);
		this->A[i].SetY(0);
	}
}

void TamGiac::TinhTienDiem(double a, double b)
{
	for (int i = 0; i < 3; i++) {
		this->A[i].TinhTien(a, b);
	}
}

void TamGiac::Nhap()
{
	using std::cout;
	using std::cin;
	for (int i = 0; i < 3; i++) {
		cout << "diem " << i + 1 << ": ";
		cin >> this->A[i];
	}
}

void TamGiac::PhongTo(double k)
{
	using std::cout;
	while (k > 0) {
		for (int i = 0; i < 3; i++) {
			this->A[i].SetX(this->A[i].GetX() * k);
			this->A[i].SetY(this->A[i].GetY() * k);
		}
	}
}

void TamGiac::ThuNho(double k)
{
	using std::cout;
	while (k > 0) {
		for (int i = 0; i < 3; i++) {
			this->A[i].SetX(this->A[i].GetX() * (1 / k));
			this->A[i].SetY(this->A[i].GetY() * (1 / k));
		}
	}
}

void TamGiac::Xoay()
{
}

ostream& operator<<(ostream& os, TamGiac& tg)
{
	os << "tam giac co: " << "\n";
	for (int i = 0; i < 3; i++) {
		cout << tg.A[i] << "\n";
	}
	return os;
}
