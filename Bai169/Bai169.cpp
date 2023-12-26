#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void XuatCon(float[], int, int, int);
void XuatCon(float[], int, int);
void XuatCon(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	XuatCon(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void XuatCon(float a[], int n, int vt, int l)
{
	if (l == 0)
		return;
	XuatCon(a, n, vt, l - 1);
	cout << setw(4) << a[vt + l - 1];
}

void XuatCon(float a[], int n, int l)
{
	if (n < l)
		return;
	XuatCon(a, n - 1, l);
	XuatCon(a, n, n - l, l);
}

void XuatCon(float a[], int n)
{
	if (n == 0)
		return;
	XuatCon(a, n - 1);
	for (int l = 2; l <= n; l++)
	{
		XuatCon(a, n, n - l, l);
		cout << endl;
	}
}