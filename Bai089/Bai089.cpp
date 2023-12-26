#include <iostream>
using namespace std;

void Nhap(int[], int&);
bool ktChinhPhuong(int);
int TongChinhPhuong(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Tong cac gia tri chinh phuong: " << TongChinhPhuong(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

bool ktChinhPhuong(int n)
{
	for (int i = 1; i < n; i++)
		if (i * i == n)
			return true;
	return false;
}

int TongChinhPhuong(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongChinhPhuong(a, n - 1);
	if (ktChinhPhuong(a[n - 1]))
		return s + a[n - 1];
	return s;
}