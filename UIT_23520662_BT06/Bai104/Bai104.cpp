#include <iostream>
using namespace std;

void Nhap(float[], int&);
float NhoNhat(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Gia tri nho nhat trong mang: " << NhoNhat(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

float NhoNhat(float a[], int n)
{
	if (n == 1)
		return a[0];
	float lc = NhoNhat(a, n - 1);
	if (lc > a[n - 1])
		lc = a[n - 1];
	return lc;
}