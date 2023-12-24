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
		return 0;
	float S = Tong(n - 1);
	return (S + sqrt(1 + (float)1 / (n * n) + (float)1 / (pow(n + 1, 2))));
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