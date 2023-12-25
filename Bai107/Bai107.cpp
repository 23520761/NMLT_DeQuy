#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void NhapMang(float[], int&);
int TimViTri(float[], int, float);

int main()
{
	int n;
	float a[500];
	NhapMang(a, n);
	float x;
	cout << "Nhap gia tri x: ";
	cin >> x;
	int vt = TimViTri(a, n, x);
	cout << "Vi tri trong mang so thuc co gia tri gan x nhat: " << vt;

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

int TimViTri(float a[], int n, float x)
{
	if (n == 1)
		return 0;
	int lc = TimViTri(a, n - 1, x);
	if (abs(a[n - 1] - x) < abs(a[lc] - x))
		lc = n - 1;
	return lc;
}