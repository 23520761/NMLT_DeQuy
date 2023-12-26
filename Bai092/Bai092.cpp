#include <iostream>
#include <iomanip>
using namespace std;

int TongGiaTri(int[], int);
void Nhap(int[], int&);
int ChuSoDau(int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << TongGiaTri(a, n);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i + 1 << "]: ";
		cin >> a[i];
	}
}

int TongGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongGiaTri(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 == 0)
		s = s + a[n - 1];
	return s;
}

int ChuSoDau(int k)
{
	int dt = abs(k);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}


