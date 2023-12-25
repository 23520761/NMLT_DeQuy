#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Nhap(float&);
void Xuat(float);
float Tich(int);

int main()
{
	float n;
	Nhap(n);
	Xuat(Tich(n));
}

float Tich(int n)
{
	if (n == 0)
		return 1;
	float T = Tich(n - 1);
	return (T * n);
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