#include <iostream>
using namespace std;

void Nhap(int[][500], int, int);
int TongToanChan(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n, d;
	cin >> m >> n >> d;
	Nhap(a, m, n);
	cout << TongToanChan(a, m, n, d);
}

void Nhap(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

int TongToanChan(int a[][500], int m, int n, int d)
{
	if (m == 0)
		return 0;
	int s = TongToanChan(a, m, n - 1, d);
	if (a[d][n - 1] % 2 == 0)
		s += a[d][n - 1];
	return s;
}