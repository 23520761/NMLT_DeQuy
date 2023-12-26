#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool KtChinhPhuong(int);
int ChinhPhuongDauTien(int[], int);

int main()
{
	int* a = new int[100];
	int n;
	Nhap(a, n);
	int kq = ChinhPhuongDauTien(a, n);
	cout << "So chinh phuong dau tien la: " << kq;
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

bool KtChinhPhuong(int n)
{
	for (int i = 0; i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

int ChinhPhuongDauTien(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ChinhPhuongDauTien(a, n - 1);
	if (lc != -1)
		return lc;
	if (KtChinhPhuong(a[n - 1]))
		return a[n - 1];
	return -1;
}