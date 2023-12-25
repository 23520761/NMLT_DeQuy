#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMaTran(float[][100], int&, int&);
void XuatMaTran(float[][100], int, int);
void SapDongGiam(float[][100], int, int, int);

int main()
{
	int m;
	int n;
	float a[100][100];
	NhapMaTran(a, m, n);
	int d;
	cout << "Nhap dong can sap xep: ";
	cin >> d;

	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);

	SapDongGiam(a, m, n, d);
	cout << "\nMa tran sau khi sap xep: \n";
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

void SapDongGiam(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return;
	for (int j = 0; j <= n - 2; j++)
		if (a[d][j] < a[d][n - 1])
			swap(a[d][j], a[d][n - 1]);
	SapDongGiam(a, m, n - 1, d);
}