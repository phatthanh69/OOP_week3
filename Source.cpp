#include <stack>
#include <iostream>
#include <math.h>
using namespace std;
bool SNT(int n) {
	while (n <= 1) return false;
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0)
			return false;
	} return true;
}
void PhanTichSNT(int n) {
	stack<int> st;
	cout << n << " = 1";
	for (int i = 2; i <= n; i++) {
		while (n % i == 0 && SNT(i)) {
			st.push(i);
			n /= i;
		}
	}while (!st.empty()) {
		int count = 0;
		int num = st.top();
		st.pop();
		cout << "*" << num;
	}cout << "\n";
}
void DecToHexDec(int n) {
	stack<int> stk;
	int temp;
	char x;
	while (n != 0)
	{
		temp = n % 16;
		stk.push(temp);
		n /= 16;
	}
	cout << "dec to hexdec: ";
	while (!stk.empty())
	{
		x = stk.top();
		switch (x)
		{
		case 0:
			x = '0';
			break;
		case 1:
			x = '1';
			break;
		case 2:
			x = '2';
			break;
		case 3:
			x = '3';
			break;
		case 4:
			x = '4';
			break;
		case 5:
			x = '5';
			break;
		case 6:
			x = '6';
			break;
		case 7:
			x = '7';
			break;
		case 8:
			x = '8';
			break;
		case 9:
			x = '9';
			break;
		case 10:
			x = 'A';
			break;
		case 11:
			x = 'B';
			break;
		case 12:
			x = 'C';
			break;
		case 13:
			x = 'D';
			break;
		case 14:
			x = 'E';
			break;
		case 15:
			x = 'F';
			break;
		}
		stk.pop();
		cout << x;
	}
}
void DecToOct(int n) {
	stack<int> stk2;
	int temp;
	int x;
	while (n != 0) {
		temp = n % 8;
		stk2.push(temp);
		n /= 8;
	}cout << "\n" << "dec to oct: ";
	while (!stk2.empty()) {
		x = stk2.top();
		stk2.pop();
		cout << x;
	}
}
void DecToBin(int n) {
	stack<int> stk3;
	int temp;
	int x;
	while (n != 0) {
		stk3.push(n % 2);
		n /= 2;
	}cout << "\n" << "dec to bin: ";
	while (!stk3.empty()) {
		x = stk3.top();
		stk3.pop();
		cout << x;
	}
}
int main() {
	int n;
	cin >> n;
	PhanTichSNT(n);
	DecToHexDec(n);
	DecToOct(n);
	DecToBin(n);
	return 0;
}