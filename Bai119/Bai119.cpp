#include <iostream>
using namespace std;

void NhapMang(int[], int&);
bool KtNguyenTo(int);
int NguyenToDau(int[], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	int kq = NguyenToDau(a, n);
	cout << "So nguyen to dau tien trong mang: " << kq;

	return 0;
}

void NhapMang(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

bool KtNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int NguyenToDau(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = NguyenToDau(a, n - 1);
	if (lc != 0)
		return lc;
	if (KtNguyenTo(a[n - 1]))
		return a[n - 1];
	return 0;
}