#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void NhapMang(float[], int&);
float TongDuong(float[], int);

int main()
{
	int n;
	float a[500];
	NhapMang(a, n);
	float kq = TongDuong(a, n);
	cout << "Tong cac so duong trong mang la: " << setprecision(3) << fixed << kq;

	return 1;
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

float TongDuong(float a[], int n)
{
	if (n == 0)
		return 0;
	float s = TongDuong(a, n - 1);
	if (a[n - 1] > 0)
		s = s + a[n - 1];
	return s;
}