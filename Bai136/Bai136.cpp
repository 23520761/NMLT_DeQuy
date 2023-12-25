#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int LonNhat(int[], int);
bool Ktdang5m(int);

int main()
{
	int* a = new int[100];
	int n;
	Nhap(a, n);
	int kq = LonNhat(a, n);
	cout << "So co dang 5m lon nhat la: " << kq;
	delete[]a;
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu trong mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}

int LonNhat(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = LonNhat(a, n - 1);
	if (!Ktdang5m(a[n - 1]))
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}

bool Ktdang5m(int x)
{
	while (x > 1)
	{
		if (x % 5 != 0)
			return 0;
		x = x / 5;
	}
	return 1;
}