#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void NhapMang(int[], int&);
bool KtDoiXung(int);
int DemDoiXung(int[], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	int kq = DemDoiXung(a, n);
	cout << "So luong cac gia tri doi xung trong mang cac so nguyen la: " << kq;
	return 1;
}

void NhapMang(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap cac phan tu trong mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

bool KtDoiXung(int n)
{
	n = abs(n);
	int dn = 0;
		for (int t = n; t != 0; t /= 10)
			dn = dn * 10 + t % 10;
	if (dn == n)
		return true;
	return false;
}

int DemDoiXung(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemDoiXung(a, n - 1);
	if (KtDoiXung(a[n - 1]))
		dem++;
	return dem;
}