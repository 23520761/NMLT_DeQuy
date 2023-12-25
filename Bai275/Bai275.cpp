#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMaTran(float[][100], int&, int&);
void XuatMaTran(float[][100], int, int);
void SapCotTang(float[][100], int, int, int);
void SapCotGiam(float[][100], int, int, int);
void SapXep(float[][100], int, int);

int main()
{
	int m;
	int n;
	float a[100][100];
	NhapMaTran(a, m, n);

	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);

	
	cout << "\nMa tran sau khi sap xep theo yeu cau: " << endl;
	SapXep(a, m, n);
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
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}

void SapCotTang(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return;
	for (int i = 0; i <= m - 2; i++)
		if (a[i][c] > a[m - 1][c])
			swap(a[i][c], a[m - 1][c]);
	SapCotTang(a, m - 1, n, c);
}

void SapCotGiam(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return;
	for (int i = 0; i <= m - 2; i++)
		if (a[i][c] < a[m - 1][c])
			swap(a[i][c], a[m - 1][c]);
	SapCotGiam(a, m - 1, n, c);
}

void SapXep(float a[][100], int m, int n)
{
	if (n == 1)
		return;
	if ((n - 1) % 2 == 0)
		SapCotGiam(a, m, n, n - 1);
	else
		SapCotTang(a, m, n, n - 1);
}