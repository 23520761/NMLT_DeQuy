#include <iostream>
using namespace std;

float DuongDau(float[], int);

int main()
{
	int n;
	float a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Duong dau: " << DuongDau(a, n);
	return 0;
}

float DuongDau(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = DuongDau(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] > 0)
		return a[n - 1];
	return 0;
}