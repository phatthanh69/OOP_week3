#include "TamGiac.h"

TamGiac::TamGiac()
{
}
TamGiac::TamGiac(Diem a, Diem b, Diem c) {
	A = a;
	B = b;
	C = c;
}
void TamGiac::TinhTienDiem(float a, float b)
{
	A.TinhTien(a, b);
	B.TinhTien(a, b);
	C.TinhTien(a, b);
}

void TamGiac::PhongTo(float k)
{
	A.SetX(A.GetX() * k);
	A.SetY(A.GetY() * k);
	B.SetX(B.GetX() * k);
	B.SetY(B.GetY() * k);
	C.SetX(C.GetX() * k);
	C.SetY(C.GetY() * k);
}

void TamGiac::Quay(float rad)
{
	A.Quay(rad);
	B.Quay(rad);
	C.Quay(rad);
}

ostream& operator<<(ostream& os, TamGiac& tg)
{
	os << "tam giac duoc tao boi ba diem: " << tg.A << " ," << tg.B << " ," << tg.C;
	return os;
}

istream& operator>>(istream& is, TamGiac& tg)
{
	int kt;
	do {
		kt = 0;
		cout << "nhap diem A: ";
		is >> tg.A;
		cout << "nhap diem B: ";
		is >> tg.B;
		cout << "nhap diem C: ";
		is >> tg.C;
		Diem d, e;
		d = tg.A.Vector(tg.B);
		e = tg.B.Vector(tg.C);
		if (float(d.GetX() * e.GetY()) == float(d.GetY() * e.GetX())) {
			kt = 1;
			cout << "khong ton tai!" << "\n";
		}
	} while (kt);
	return is;
}
