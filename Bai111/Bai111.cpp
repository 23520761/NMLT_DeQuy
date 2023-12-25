#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void NhapMang(float[], int&);
float AmDau(float[], int);

int main()
{
	int n;
	float a[500];
	NhapMang(a, n);
	float kq = AmDau(a, n);
	cout << "Gia tri am dau tien trong mang: " << kq;

	return 0;
}

void NhapMang(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap cac phan tu trong mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

float AmDau(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = AmDau(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] < 0)
		return a[n - 1];
	return 0;
}

