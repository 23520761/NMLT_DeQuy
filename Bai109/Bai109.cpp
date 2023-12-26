#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float[], int&);
float Max(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Gia tri lon nhat trong mang: " << Max(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

float Max(float a[], int n)
{
	if (n == 1)
		return abs(a[0]);
	float lc = Max(a, n - 1);
	if (lc < abs(a[n - 1]))
		lc = abs(a[n - 1]);
	return lc;
}