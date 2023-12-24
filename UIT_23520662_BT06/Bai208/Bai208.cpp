#include <iostream>
using namespace std;

void Nhap(int[][500], int, int);
int TongToanChan(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	cin >> m >> n;
	Nhap(a, m, n);
	cout << TongToanChan(a, m, n);
}

void Nhap(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

int TongToanChan(int a[][500], int m, int n)
{
	if (m == 0)
		return 0;
	int s = TongToanChan(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 == 0)
			s += a[m - 1][j];
	return s;
}