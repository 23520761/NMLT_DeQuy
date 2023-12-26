#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
void Xuat(float[][500], int, int);
void DichLenCot(float[][500], int, int);
void DichLen(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	cin >> m >> n;
	Nhap(a, m, n);
	DichLen(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

void DichLenCot(float a[][100],
	int m, int n, int c)
{
	float temp = a[0][c];
	for (int i = 0; i <= m - 2; i++)
		a[i][c] = a[i + 1][c];
	a[m - 1][c] = temp;
}

void DichLen(float a[][100], int m, int n)
{
	if (n == 0)
		return;
	DichLen(a, m, n - 1);
	DichLenCot(a, m, n, n - 1);
}