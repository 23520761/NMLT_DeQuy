#include <iostream>
using namespace std;

void Nhap(int[], int&);
int ktBangNhau(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = ktBangNhau(a, n);
	if (kq == 0)
		cout << "Cac phan tu khong bang nhau";
	else
		cout << "Cac phan tu bang nhau";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

int ktBangNhau(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (a[n - 2] == a[n - 1] && ktBangNhau(a, n - 1) == 1)
		return 1;
	return 0;
}