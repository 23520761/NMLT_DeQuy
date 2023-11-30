#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void NhapMang(int [], int&);
int ChuSoDau(int);
int TongGiaTri(int [], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	int kq = TongGiaTri(a, n);
	cout << "Tong cac gia tri co chu so dau tien la so le trong mang la: " << kq;
	return 1;
}

void NhapMang(int a[], int& n)
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

int ChuSoDau(int n)
{
	n = abs(n);
	int ChuSoDau = n;
	while (ChuSoDau >= 10)
		ChuSoDau /= 10;
	return ChuSoDau;
}
int TongGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongGiaTri(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 != 0)
		s = s + a[n - 1];
	return s;
}
