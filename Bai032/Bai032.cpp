#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Nhap(float&);
void Xuat(float);
float TinhToan(int);

int main()
{
	float n;
	Nhap(n);
	Xuat(TinhToan(n));
}

float TinhToan(int n)
{
	if (n == 1)
		return 1;
	float S = TinhToan(n - 1);
	return ((float)(-9 * S - 24) / (5 * S + 13));
}

void Nhap(float& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

void Xuat(float n)
{
	cout << "Ket qua la: ";
	cout << n;
}