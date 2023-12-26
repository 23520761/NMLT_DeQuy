#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Nhap(float&);
void Xuat(float);
float Tinh(float);

float main()
{
	float n;
	Nhap(n);
	Xuat(Tinh(n));
}

float Tinh(float n)
{
	if (n == 1)
		return 1;
	if (n == 0)
		return 0;
	float S = Tinh(n - 1);
	float S2 = Tinh(n - 2);
	float s1 = ((float)1 / (S - S2)) + n;
	return (S + (float)1 / s1);
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