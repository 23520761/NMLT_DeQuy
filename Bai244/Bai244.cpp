#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[][100], int&, int&);
float NhoNhat(float[][100], int, int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	int c;
	cout << "Nhap cot can kiem tra: ";
	cin >> c;
	cout << "So nho nhat: " << NhoNhat(a, m, n, c);
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
			cout << "Nhap a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
}

float NhoNhat(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return a[0][c];
	float lc = NhoNhat(a, m - 1, n, c);
	if (a[m - 1][c] < lc)
		lc = a[m - 1][c];
	return lc;
}