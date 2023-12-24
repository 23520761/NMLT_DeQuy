#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void ThemBaoToan(int[], int&, int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int x;
	cout << "So muon them: ";
	cin >> x;
	ThemBaoToan(a, n, x);
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

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
}

void ThemBaoToan(int a[], int& n, int x)
{
	if (n == 1)
	{
		a[0] = x;
		n++;
		return;
	}
	if (a[n - 1] <= x)
	{
		a[n] = x;
		n++;
		return;
	}
	a[n] = a[n - 1];
	n--;
	ThemBaoToan(a, n, x);
	n++;
}