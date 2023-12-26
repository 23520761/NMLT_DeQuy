#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Nhap(int&);
void Xuat(int);
int TongChan(int);

int main()
{
	int n;
	Nhap(n);
	Xuat(TongChan(n));
}

int TongChan(int n)
{
	if (n == 0)
		return 0;
	int SoDuong = 0;
	int S = TongChan(n / 10);
	if ((n % 10) % 2 == 0)
		SoDuong = n % 10;
	return (S + SoDuong);
}

void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

void Xuat(int n)
{
	cout << "Ket qua la: ";
	cout << n;
}