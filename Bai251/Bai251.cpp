#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
float TongCot(float[][500], int, int, int);
float TongNhoNhat(float[][500], int, int);

int main()
{
	int m;
	int n;
	float a[500][500];
	NhapMaTran(a, m, n);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);

	float kq = TongNhoNhat(a, m, n);
	cout << "Tong cot nho nhat: " << kq;

	return 1;
}

void NhapMaTran(float a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
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

void XuatMaTran(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}

float TongCot(float a[][500], int m, int n, int c)
{
	if (m == 0)
		return 0;
	return TongCot(a, m - 1, n, c) + a[m - 1][c];	
}

float TongNhoNhat(float a[][500], int m, int n)
{
	if (n == 1)
		return TongCot(a, m, n, 0);
	float lc = TongNhoNhat(a, m, n - 1);
	if (TongCot(a, m, n, n - 1) < lc)
		lc = TongCot(a, m, n, n - 1);
	return lc;
}