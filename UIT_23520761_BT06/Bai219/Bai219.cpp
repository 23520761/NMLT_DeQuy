#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
int TichCot(int[][500], int, int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	NhapMaTran(a, m, n);
	int c;
	cout << "Nhap cot can tinh: ";
	cin >> c;

	int kq = TichCot(a, m, n, c);
	cout << "Tich cac so chan tren cot " << c << ": " << kq << endl;

	return 1;
}

void NhapMaTran(int a[][500], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap so phan tu trong ma tran: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}

void XuatMaTran(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(6) << a[i][j];
		cout << endl;
	}
}

int TichCot(int a[][500], int m, int n, int c)
{
	if (m == 0)
		return 1;
	int T = TichCot(a, m - 1, n, c);
	if (a[m - 1][c] % 2 == 0)
		T *= a[m - 1][c];
	return T;
}
