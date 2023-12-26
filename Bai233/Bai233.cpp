#include <iostream>
using namespace std;

void Nhap(int[][500], int, int);
bool ktHoanThien(int);
int DemHoanThien(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n, d;
	cin >> m >> n >> d;
	Nhap(a, m, n);
	cout << DemHoanThien(a, m, n, d);
	return 0;
}

void Nhap(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

bool ktHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s += i;
	if (s == n)
		return true;
	return false;
}

int DemHoanThien(int a[][500], int m, int n, int d)
{
	if (m == 0)
		return 0;
	int dem = DemHoanThien(a, m, n - 1, d);
	if (ktHoanThien(a[d][n - 1]))
		dem = dem + 1;
	return dem;
}