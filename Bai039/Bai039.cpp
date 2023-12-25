#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int ChuSoDauTien(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = ChuSoDauTien(n);
	cout << "Ket qua: " << kq;
	return 1;
}

int ChuSoDauTien(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	int DauTien = ChuSoDauTien(n / 10);
	return DauTien;
}
