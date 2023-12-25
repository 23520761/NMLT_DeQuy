#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void TimDoan(float[], int, float&, float&);
void Nhap(float[], int&);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	float x = a[0], y = a[0];
	TimDoan(a, n, x, y);
	cout << x << " " << y;
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i + 1 << "]: ";
		cin >> a[i];
	}
}

void TimDoan(float a[], int n, float& x, float& y)
{
	if (n == 1)
	{
		x = a[0];
		y = a[0];
		return;
	}
	TimDoan(a, n - 1, x, y);
	if (a[n - 1] < x)
		x = a[n - 1];
	if (a[n - 1] > y)
		y = a[n - 1];
}