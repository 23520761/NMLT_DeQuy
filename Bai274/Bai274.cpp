#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[][100], int&, int&);
void Swap(float&, float&);
void DongChanTang(float[][100], int, int, int);
void DongLeGiam(float[][100], int, int, int);
void SapXep(float[][100], int, int);
void LietKe(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);

	SapXep(a, m, n);
	cout << "Sau Sap Xep: ";
	cout << endl;
	LietKe(a, m, n);

	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			// cout << "Nhap a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
}

void Swap(float& a, float& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void DongChanTang(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return;
	DongChanTang(a, m, n - 1, d);
	for (int j = 0; j < n; j++)
		if (a[d][n - 1] < a[d][j])
			Swap(a[d][n - 1], a[d][j]);
}

void DongLeGiam(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return;
	DongLeGiam(a, m, n - 1, d);
	for (int j = 0; j < n; j++)
		if (a[d][n - 1] > a[d][j])
			Swap(a[d][n - 1], a[d][j]);
}

void SapXep(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	SapXep(a, m - 1, n);
	if ((m - 1) % 2 == 0)
		DongChanTang(a, m, n, m - 1);
	else
		DongLeGiam(a, m, n, m - 1);
}

void LietKe(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setw(4) << a[m - 1][j];
	cout << endl;
}