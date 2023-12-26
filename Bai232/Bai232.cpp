#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
int DemDuongDong(int[][100], int, int, int);

int main()
{
	int m, n, a[100][100];
	Nhap(a, m, n);

	int k;
	cout << "Nhap Dong k: ";
	cin >> k;

	cout << "So luong so duong tren dong " << k << " la:" << DemDuongDong(a, m, n, k) << endl;
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}


int DemDuongDong(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int dem = DemDuongDong(a, m, n - 1, d);
	if (a[d][n - 1] % 2 == 0)
		dem++;
	return dem;
}