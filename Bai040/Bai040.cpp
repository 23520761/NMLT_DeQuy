#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Nhap(int&);
void Xuat(int);
int UocLeLonNhat(int);

int main()
{
	int n;
	Nhap(n);
	Xuat(UocLeLonNhat(n));
}

int UocLeLonNhat(int n)
{
	n = abs(n);
	if (n % 2 != 0)
		return n;
	return UocLeLonNhat(n / 2);
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