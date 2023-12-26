#include <iostream>
#include <iomanip>

using namespace std;

void HoanThienGiam(int[], int);
bool ktHoanThien(int);
void Nhap(int[], int&);
void Xuat(int[], int);

void HoanThienGiam(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
		if (ktHoanThien(a[i]) && ktHoanThien(a[n - 1]) && a[i] < a[n - 1])
			swap(a[i], a[n - 1]);
	HoanThienGiam(a, n - 1);
}

bool ktHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s = s + i;
	if (s == n)
		return true;
	return false;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	HoanThienGiam(b, k);
	Xuat(b, k);
	return 1;
}