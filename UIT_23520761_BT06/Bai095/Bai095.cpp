#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void NhapMang(int[], int&);
int DemChan(int[], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	int kq = DemChan(a, n);
	cout << "So luong cac gia tri chan trong mang cac so nguyen la: " << kq;
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

int DemChan(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemChan(a, n - 1);
	if (a[n - 1] % 2 == 0)
		dem++;
	return dem;
}