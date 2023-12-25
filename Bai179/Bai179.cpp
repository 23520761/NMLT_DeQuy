#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(int[], int&);
void DichPhai(int[], int);
void XuatMang(int[], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	cout << "\nMang ban dau: " << endl;
	XuatMang(a, n);
	DichPhai(a, n);
	cout << "\nMang sau khi sap xep dich phai xoay vong: " << endl;
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

void DichPhai(int a[], int n)
{
	if (n <= 1)
		return;
	swap(a[n - 2], a[n - 1]);
	DichPhai(a, n - 1);
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}