#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
void SapCotGiam(float[][500], int, int, int);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n, c;
	cin >> m >> n >> c;
	Nhap(a, m, n);
	SapCotGiam(a, m, n, c);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void SapCotGiam(float a[][500], int m, int n, int d)
{
	if (m == 1 or m == 0)
		return;
	for (int i = 0; i <= m - 2; i++)
		if (a[i][d] < a[m - 1][d])
			swap(a[i][d], a[m - 1][d]);
	SapCotGiam(a, m - 1, n, d + 1);
}

void Xuat(float a[][500], int m, int n)
{

}