#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMang(int[], int&);
bool KtNguyenTo(int);
int KtTonTaiNguyenTo(int[], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	int kq = KtTonTaiNguyenTo(a, n);
	if (kq == 1)
		cout << "Mang so nguyen co ton tai so nguyen to.";
	else
		cout << "Mang so nguyen khong ton tai so nguyen to.";
	return 0;
}

void NhapMang(int a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	cout << "Nhap cac phan tu trong mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

bool KtNguyenTo(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

int KtTonTaiNguyenTo(int a[], int n)
{
	if (n == 0)
		return 0;
	if (KtNguyenTo(a[n - 1]))
		return 1;
	return KtTonTaiNguyenTo(a, n - 1);
}