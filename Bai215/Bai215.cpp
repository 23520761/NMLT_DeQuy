#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool KtDoiXung(int);
int TongDong(int[][500], int, int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	NhapMaTran(a, m, n);
	int d;
	cout << "Nhap dong can tinh: ";
	cin >> d;
	int kq = TongDong(a, m, n, d);
	cout << "Tong cac so doi xung tren dong " << d << ": " << kq << endl;
	
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
			cout << a[i][j] << " ";
		cout << endl;
	}
}

bool KtDoiXung(int n)
{
	if (n < 10)
		return true;
	int temp = n;
	int dx = 0;
	while (temp != 0)
	{
		int dv = temp % 10;
		dx = dx * 10 + dv;
		temp /= 10;
	}
	if (dx == n)
		return true;
	return false;
}

int TongDong(int a[][500], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int s = TongDong(a, m, n - 1, d);
	if (KtDoiXung(a[d][n - 1]))
		s += a[d][n - 1];
	return s;
}
