#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);

float LonNhatCot(float[][100], int, int, int);
void ThemDong(float[][100], int&, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);

	ThemDong(a, m, n);

	cout << "Mang sau khi them dong sao cho moi phan tu la gia tri lon nhat trong cot: " << endl;
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

float LonNhatCot(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return a[0][c];
	float lc = LonNhatCot(a, m - 1, n, c);
	if (a[m - 1][c] > lc)
		lc = a[m - 1][c];
	return lc;
}

void ThemDong(float a[][100], int& m, int n)
{
	if (n == 0)
	{
		m++;
		return;
	}
	ThemDong(a, m, n - 1);
	a[m - 1][n - 1] = LonNhatCot(a, m - 1, n, n - 1);
}