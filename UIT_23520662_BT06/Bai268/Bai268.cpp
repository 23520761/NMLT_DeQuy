#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
void HoanViDong(float[][500], int, int, int d1, int d2);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n, d1, d2;
	cin >> m >> n >> d1 >> d2;
	Nhap(a, m, n);
	HoanViDong(a, m, n, d1, d2);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void HoanViDong(float a[][500], int m, int n, int d1, int d2)
{
	if (n == 0)
		return;
	HoanViDong(a, m, n - 1, d1, d2);
	swap(a[d1][n - 1], a[d2][n - 1]);
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