#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Nhap(float&);
void Xuat(float);
float BieuThuc(float);

int main()
{
	float n;
	Nhap(n);
	Xuat(BieuThuc(n));
}

float BieuThuc(float n)
{
	if (n == 1)
		return 3;
	if (n == 0)
		return -1;
	return ((5 * BieuThuc(n - 1)) + (6 * BieuThuc(n - 2)));
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