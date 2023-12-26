#include <iostream>
using namespace std;

void Nhap(int[], int&);
int ViTriMin(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = ViTriMin(a, n);
	if (kq == -1)
		cout << "khong co so duong";
	else
		cout << "So duong nho nhat la: " << kq;
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] : ";
		cin >> a[i];
	}
}

int ViTriMin(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ViTriMin(a, n - 1);
	if (a[n - 1] <= 0)
		return lc;
	if (lc == -1)
		return n - 1;
	if (a[n - 1] < a[lc])
		lc = n - 1;
	return lc;
}