#include <iostream>

using namespace std;

void NhapMang(int[], int&);
int ChanCuoi(int[], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	int kq = ChanCuoi(a, n);
	cout << "So chan cuoi cung trong mang: " << kq;

	return 0;
}

void NhapMang(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int ChanCuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (a[n - 1] % 2 == 0)
		return a[n - 1];
	return ChanCuoi(a, n - 1);
}