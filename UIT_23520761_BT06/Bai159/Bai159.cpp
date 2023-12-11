#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMang(int[], int&);
void XuatMang(int[], int);
void HoanVi(int&, int&);
void ChanTangLeTang(int[], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	cout << "\nMang ban dau: " << endl;
	XuatMang(a, n);
	ChanTangLeTang(a, n);
	cout << "\nMang sau khi sap xep cac so chan va le tang: " << endl;
	XuatMang(a, n);

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

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void ChanTangLeTang(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[i] % 2 == 0 && a[n - 1] % 2 == 0 && a[i] > a[n - 1])
			HoanVi(a[i], a[n - 1]);
		if (a[i] % 2 != 0 && a[n - 1] % 2 != 0 && a[i] > a[n - 1])
			HoanVi(a[i], a[n - 1]);
	}
	ChanTangLeTang(a, n - 1);
}