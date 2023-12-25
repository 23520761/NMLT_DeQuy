#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Nhap(float&);
void Xuat(float);
float Tong(int);

int main()
{
	float n;
	Nhap(n);
	Xuat(Tong(n));
}

float Tong(int n)
{
	if (n == 0)
		return 1;
	float S = Tong(n - 1);
	return (S + (float)1 / (2 * n + 1));
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