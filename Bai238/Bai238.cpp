#include <iostream>
using namespace std;

void Nhap(int[][500], int, int);
int DemChuSo(int);
int DemChuSo(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	cin >> m >> n;
	Nhap(a, m, n);
	cout << DemChuSo(a, m, n);
	return 0;
}

void Nhap(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

int DemChuSo(int n)
{
	int dem = 0;
	while (n != 0)
	{
		n /= 10;
		dem++;
	}
	return dem;
}

int DemChuSo(int a[][500], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemChuSo(a, m - 1, n);
	for (int j = 0; j < n; j++)
		dem += DemChuSo(a[m - 1][j]);
	return dem;
}