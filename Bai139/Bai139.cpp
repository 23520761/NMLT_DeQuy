#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void NhapMang(int[], int&);
int UCLC(int, int);
int BCNN(int, int);
int TimBCNN(int[], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	int bcnn = TimBCNN(a, n);
	cout << "Boi chung nho nhat cua tat ca cac phan tu trong mang: " << bcnn;

	return 0;
}

void NhapMang(int a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	cout << "Nhap cac phan tu trong mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if (a == 0 || b == 0)
		return a + b;
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

int BCNN(int a, int b)
{
	return a * b / UCLN(a, b);
}

int TimBCNN(int a[], int n)
{
	if (n == 1)
		return a[0];
	int lc = TimBCNN(a, n - 1);
	lc = BCNN(lc, a[n - 1]);
	return lc;
}