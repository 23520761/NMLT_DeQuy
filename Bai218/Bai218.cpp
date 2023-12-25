#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int[][500], int, int);
bool ktDang5m(int);
int Tong5m(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n, d;
	cin >> m >> n >> d;
	Nhap(a, m, n);
	cout << Tong5m(a, m, n, d);
}

void Nhap(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

bool ktDang5m(int n)
{
	for (int i = 0; i <= n; i++)
		if (pow(5, i) == n)
			return true;
	return false;
}

int Tong5m(int a[][500], int m, int n, int d)
{
	if (m == 0)
		return 0;
	int s = Tong5m(a, m, n - 1, d);
	if (ktDang5m(a[d][n - 1]))
		s += a[d][n - 1];
	return s;
}