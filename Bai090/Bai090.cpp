#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int DaoNguoc(int);
bool ktDoiXung(int);
int TongDoiXung(int[], int);

int main()
{
	int a[100], n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Tong doi xung = " << TongDoiXung(a, n);
	return 0;
}

int DaoNguoc(int k)
{
	if (k == 0)
		return 0;
	return (k % 10) * pow(10, floor(log10(k))) + DaoNguoc(k / 10);
}

bool ktDoiXung(int k)
{
	if (DaoNguoc(k) == k)
		return 1;
	return 0;
}

int TongDoiXung(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongDoiXung(a, n - 1);
	if (ktDoiXung(a[n - 1]))
		return s + a[n - 1];
	return s;
}