#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int DemXuatHien(int[], int, int[], int);

int main()
{
	int n;
	int a[100];
	int k;
	int b[100];
	Nhap(a, n);
	Nhap(b, k);
	cout << DemXuatHien(a, n, b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int DemXuatHien(int a[], int n, int b[], int m)
{
	if (m < n)
		return 0;
	int dem = DemXuatHien(a, n, b, m - 1);
	int vt = m - n;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[vt])
			return dem;
		vt++;
	}
	dem++;
	return dem;
}