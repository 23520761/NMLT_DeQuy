#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMaTran(float[][100], int&, int&);
void XuatMaTran(float[][100], int, int);
float TongCot(float[][100], int, int, int);
void ThemDong(float[][100], int&, int);

int main()
{
	int m;
	int n;
	float a[100][100];
	NhapMaTran(a, m, n);
	int d;
	cout << "Nhap dong toan 1 vao vi tri: ";
	cin >> d;

	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nMa tran sau khi sap xep: " << endl;
	ThemDong(a, m, n);
	XuatMaTran(a, m, n);

	return 1;
}

void NhapMaTran(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot : ";
	cin >> n;
	cout << "Nhap so phan tu trong ma tran: \n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}

void XuatMaTran(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(9) << a[i][j];
		cout << endl;
	}
}

float TongCot(float a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	return TongCot(a, m - 1, n, c) + a[m - 1][c];
}

void ThemDong(float a[][100], int& m, int n)
{
	if (n == 0)
	{
		m++;
		return;
	}
	ThemDong(a, m, n - 1);
	a[m - 1][n - 1] = TongCot(a, m - 1, n, n - 1);
}
