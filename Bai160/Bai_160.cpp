#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void DuongTangAmGiam(float[], int);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	DuongTangAmGiam(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(10);
}

void DuongTangAmGiam(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[i] > 0 && a[n - 1] > 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
		if (a[i] < 0 && a[n - 1] < 0 && a[i] < a[n - 1])
			swap(a[i], a[n - 1]);
	}
	DuongTangAmGiam(a, n - 1);
}