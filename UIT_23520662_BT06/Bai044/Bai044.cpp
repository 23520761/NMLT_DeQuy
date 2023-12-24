#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Nhap(int&);
void Xuat(int);
int ktGiam(int);

int main()
{
	int n;
	Nhap(n);
	Xuat(ktGiam(n));
}

int ktGiam(int n)
{
	n = abs(n);
	if (n <= 9)
		return 1;
	int dv = n % 10;
	int hc = (n / 10) % 10;
	if (ktGiam(n / 10) && hc >= dv)
		return 1;
	return 0;
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