#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
int DemAm(float[][500], int, int, int);

int main()
{
	int m;
	int n;
	float a[500][500];
	NhapMaTran(a, m, n);
	int c;
	cout << "Nhap cot can tinh: ";
	cin >> c;

	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);

	int kq = DemAm(a, m, n, c);
	cout << "So luong am tren cot " << c << " trong ma tran: " << kq;
	
	return 1;
}

void NhapMaTran(float a[][500], int& m, int& n)
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

void XuatMaTran(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}

int DemAm(float a[][500], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int dem = DemAm(a, m - 1, n, c);
	if (a[m - 1][c] < 0)
		dem += 1;
	return dem;
}