#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMang(int[], int&);
int KtTang(int[], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	int kq = KtTang(a, n);
	if (kq == 1)
		cout << "Mang tang dan.";
	else
		cout << "Mang khong tang dan.";
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

int KtTang(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (a[n - 2] <= a[n - 1] && KtTang(a, n - 1) == 1)
		return 1;
	return 0;
}