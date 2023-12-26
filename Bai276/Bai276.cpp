#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);

void HoanViDong(float[][100], int, int, int, int);
float TongDong(float[][100], int, int, int);
void SapTang(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);
	SapTang(a, m, n);
	cout << "Mang sau khi sap dong co tong nho hon nam tren: " << endl;
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(10) << a[i][j];
		cout << endl;
	}
}

void HoanViDong(float a[][100], int m, int n, int d1, int d2)
{
	if (n == 0)
		return;
	HoanViDong(a, m, n - 1, d1, d2);
	swap(a[d1][n - 1], a[d2][n - 1]);
}

float TongDong(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	return TongDong(a, m, n - 1, d) + a[d][n - 1];
}

void SapTang(float a[][100], int m, int n)
{
	if (m == 1)
		return;
	for (int i = 0; i <= m - 2; i++)
		if (TongDong(a, m, n, i) > TongDong(a, m, n, m - 1))
			HoanViDong(a, m, n, i, m - 1);
	SapTang(a, m - 1, n);
}