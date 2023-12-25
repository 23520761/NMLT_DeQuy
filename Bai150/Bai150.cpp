#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XayDung(int[], int, int[], int&);

int main()
{
	int n, k;
	int a[100], b[100];
	Nhap(a, n);
	XayDung(a, n, b, k);
	Xuat(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(10);
}

void XayDung(int a[], int n, int b[], int& k)
{
	if (n == 0)
	{
		k = 0;
		return;
	}
	XayDung(a, n - 1, b, k);
	if (a[n - 1] % 2 != 0)
		b[k++] = a[n - 1];
}