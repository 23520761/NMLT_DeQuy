#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(int[], int&);
void MotVeDau(int[], int);
void XuatMang(int[], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	cout << "\nMang ban dau: " << endl;
	XuatMang(a, n);
	MotVeDau(a, n);
	cout << "\nMang sau khi sap xep dua so 1 ve dau: " << endl;
	XuatMang(a, n);
	return 1;
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

void MotVeDau(int a[], int n)
{
	if (n == 0)
		return;
	if (a[n - 1] != 1)
	{
		MotVeDau(a, n - 1);
		return;
	}
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[i] != 1)
		{
			swap(a[n - 1], a[i]);
			break;
		}
	}
	MotVeDau(a, n - 1);
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}