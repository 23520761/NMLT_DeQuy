#include <iostream>
#include <iomanip>

using namespace std;

void XayDung(float[], int, float[], int&);
void Nhap(float[], int&);
void Xuat(float[], int);

void XayDung(float a[], int n, float b[], int& k)
{
	if (n == 0)
	{
		k = 0;
		return;
	}
	XayDung(a, n - 1, b, k);
	if (a[n - 1] < 0)
		b[k++] = a[n - 1];
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	float c[100];
	int m;
	XayDung(b, k, c, m);
	cout << "\nMang ket qua";
	Xuat(c, m);
	return 1;
}