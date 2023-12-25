#include <iostream>
using namespace std;

void Nhap(int[], int&);
int DauTien(int[], int, int, int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);

	int x;
	cout << "Nhap x: ";
	cin >> x;

	int y;
	cout << "Nhap y: ";
	cin >> y;

	cout << "So dau tien nam trong khoang (x, y): " << DauTien(a, n, x, y);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

int DauTien(int a[], int n, int x, int y)
{
	if (n == 0)
		return x;
	int lc = DauTien(a, n - 1, x, y);
	if (lc != x)
		return lc;
	if (a[n - 1] > x && a[n - 1] < y)
		return a[n - 1];
	return x;
}