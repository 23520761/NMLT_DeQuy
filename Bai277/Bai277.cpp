#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][100], int&, int&);
void XoaDong(float[][100], int&, int, int);
void Xuat(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n, c;

	Nhap(a, m, n);
	cout << "Nhap Dong can xoa:";
	cin >> c;
	XoaDong(a, m, n, c);
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

void XoaDong(float a[][100], int& m, int n, int d)
{
	if (n == 0)
	{
		m--;
		return;
	}
	XoaDong(a, m, n - 1, d);
	for (int i = d; i <= m - 2; i++)
		a[i][n - 1] = a[i + 1][n - 1];
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << setw(5) << a[i][j];
	}
}