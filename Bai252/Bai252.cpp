#include <iostream>
using namespace std;

void Nhap(int[][500], int, int);
int TonTaiChan(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	cin >> m >> n;
	Nhap(a, m, n);
	if (TonTaiChan(a, m, n) == 1)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}

void Nhap(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

int TonTaiChan(int a[][500], int m, int n)
{
	if (m == 0)
		return 0;
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 == 0)
			return 1;
	return TonTaiChan(a, m - 1, n);
}