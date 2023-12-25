#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMang(int[], int&);
void XuatMang(int[], int);
void HoanVi(int&, int&);
void ViTriLeTang(int[], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	cout << "\nMang ban dau: " << endl;
	XuatMang(a, n);
	cout << "\nMang sau khi sap xep cac vi tri le tang: " << endl;
	ViTriLeTang(a, n);
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

void ViTriLeTang(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
		if (i % 2 != 0 && (n - 1) % 2 != 0 && a[i] > a[n - 1])
			HoanVi(a[i], a[n - 1]);
	ViTriLeTang(a, n - 1);
}
