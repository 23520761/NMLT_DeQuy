#include <iostream>
using namespace std;

float AmLonNhat(float[], int);

int main()
{
	int n;
	float a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Am lon nhat: " << AmLonNhat(a, n);
	return 0;
}

float AmLonNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = AmLonNhat(a, n - 1);
	if (a[n - 1] >= 0)
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}