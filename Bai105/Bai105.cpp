#include <iostream>
#include <cmath>
using namespace std;

int TimViTri(float[], int);

int main()
{
	int n;
	float a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Vi tri = " << TimViTri(a, n);
	return 0;
}

int TimViTri(float a[], int n)
{
	if (n == 1)
		return 0;
	int lc = TimViTri(a, n - 1);
	if (a[n - 1] < a[lc])
		lc = n - 1;
	return lc;
}