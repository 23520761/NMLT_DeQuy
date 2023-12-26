#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TichDong(float[][100], int, int, int);
void ThemCot(float[][100], int, int&);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	ThemCot(a, m, n);
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

float TichDong(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return a[d][0];
	return TichDong(a, m, n - 1, d) * a[d][n - 1];
}

void ThemCot(float a[][100], int m, int& n)
{
	if (m == 0)
	{
		n++;
		return;
	}
	ThemCot(a, m - 1, n);
	a[m - 1][n - 1] = TichDong(a, m, n - 1, m - 1);
}
