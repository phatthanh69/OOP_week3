#include "DaThuc.h"

DaThuc::DaThuc() {
	bac = 0;
	heso = NULL;
}
DaThuc::DaThuc(int n) {
	bac = n;
	heso = new float[n + 1];
}

DaThuc::DaThuc(const DaThuc& f)
{
	bac = f.bac;
	this->heso = new float[bac + 1];
	for (int i = 0; i <= bac; i++) {
		heso[i] = f.heso[i];
	}
}

DaThuc::~DaThuc()
{
	delete[] heso;
}

istream& operator>>(istream& is, DaThuc& dt) {
	cout << "nhap bac cua da thuc: " << "\n";
	is >> dt.bac;
	dt.heso = new float[dt.bac + 1];
	cout << "nhap he so cua da thuc: ";
	for (int i = dt.bac; i >= 0; i--) {
		is >> dt.heso[i];
	}return is;
}

ostream& operator<<(ostream& os, DaThuc& dt) {
	cout << "da thuc vua nhap la: ";
	for (int i = dt.bac; i >= 0; i--) {
		cout << dt.heso[i] << "x^" << i;
		if (i != 0) {
			cout << "+";
		}
	}return os;
}
DaThuc operator+(DaThuc a, DaThuc b) {
	DaThuc c;
	if (a.bac >= b.bac) {
		c.bac = a.bac;
		c.heso = new float[c.bac + 1];
		for (int i = c.bac; i >= 0; i--) {
			if (i > b.bac) c.heso[i] = a.heso[i];
			else {
				if (i == b.bac) {
					c.heso[i] = a.heso[i] + b.heso[i];
					b.bac--;
				}
				else c.heso[i] = b.heso[i];
			}
		}
	}
	else {
		c.bac = b.bac;
		c.heso = new float[c.bac + 1];
		for (int i = c.bac; i > 0; i--) {
			if (i > a.bac) c.heso[i] = b.heso[i];
			else {
				if (i == a.bac) {
					c.heso[i] = a.heso[i] + b.heso[i];
					a.bac--;
				}
				else c.heso[i] = a.heso[i];
			}
		}
	} return c;
}

DaThuc operator-(DaThuc a, DaThuc b) {
	DaThuc c;
	if (a.bac >= b.bac) {
		c.bac = a.bac;
		c.heso = new float[c.bac + 1];
		for (int i = c.bac; i >= 0; i--) {
			if (i > b.bac) c.heso[i] = a.heso[i];
			else {
				if (i == b.bac) {
					c.heso[i] = a.heso[i] - b.heso[i];
					b.bac--;
				}
				else c.heso[i] = b.heso[i];
			}
		}
	}
	else {
		c.bac = b.bac;
		c.heso = new float[c.bac + 1];
		for (int i = c.bac; i > 0; i--) {
			if (i > a.bac) c.heso[i] = b.heso[i];
			else {
				if (i == a.bac) {
					c.heso[i] = a.heso[i] - b.heso[i];
					a.bac--;
				}
				else c.heso[i] = a.heso[i];
			}
		}
	} return c;
}

float DaThuc::TinhGiaTri(float x) {
	float tong = 0;
	for (int i = bac; i >= 0; i--) {
		tong += heso[i] * pow(x, i);
	} return tong;
}
