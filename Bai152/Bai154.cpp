#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Swap(int&, int&);
void SapGiam(int[], int n);
void Xuat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	SapGiam(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void SapGiam(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] < a[n - 1])
			Swap(a[i], a[n - 1]);
	SapGiam(a, n - 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
}