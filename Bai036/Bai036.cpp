#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Nhap(int&);
void Xuat(int);
int DemSo(int);

int main()
{
	int n;
	Nhap(n);
	Xuat(DemSo(n));
}

int DemSo(int n)
{
	if (n == 0)
		return 0;
	int S = DemSo(n / 10);
	int SoLe = 0;
	if ((n % 10) % 2 != 0)
		SoLe = n % 10;
	return (SoLe + S);
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