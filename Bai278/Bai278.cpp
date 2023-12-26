#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
void XoaCot(float[][100], int, int&, int);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n, c;
	cin >> m >> n >> c;
	Nhap(a, m, n);
	XoaCot(a, m, n, c);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void XoaCot(float a[][500], int m, int& n,
	int c)
{
	if (m == 0)
	{
		n--;
		return;
	}
	XoaCot(a, m - 1, n, c);
	for (int j = c; j <= n - 2; j++)
		a[m - 1][j] = a[m - 1][j + 1];
}