#include <iostream>
using namespace std;

void Nhap(int[], int&);
int ViTriAmMax(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = ViTriAmMax(a, n);
	if (kq == -1)
		cout << "khong co gia tri am";
	else
		cout << kq;
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

int ViTriAmMax(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ViTriAmMax(a, n - 1);
	if (a[n - 1] >= 0)
		return lc;
	if (lc == -1)
		return n - 1;
	if (a[lc] < a[n - 1])
		lc = n - 1;
	return lc;
}