#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Nhap(float&);
void Xuat(float);
float Tong(float, float);

int main()
{
	float n, x;
	Nhap(x);
	Nhap(n);
	Xuat(Tong(x, n));
}

float Tong(float x, float n)
{
	if (n == 1)
		return x;
	float S = Tong(x, n - 1);
	return (S + pow(x, n));
}

void Nhap(float& n)
{
	cout << "Nhap: ";
	cin >> n;
}

void Xuat(float n)
{
	cout << "Ket qua la: ";
	cout << n;
}