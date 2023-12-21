#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
int KtDong(int[][500], int, int, int);
void LietKe(int[][500], int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	NhapMaTran(a, m, n);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);

	cout << "Chi so cac dong chua gia tri toan chan: ";
	LietKe(a, m, n);

	return 1;
}

void NhapMaTran(int a[][500], int& m, int& n)
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

void XuatMaTran(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}

int KtDong(int a[][500], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (n == 1)
	{
		if (a[d][0] % 2 == 0)
			return 1;
		else
			return 0;
	}
	if (a[d][n - 1] % 2 == 0 && KtDong(a, m, n - 1, d) == 1)
		return 1;
	return 0;
}

void LietKe(int a[][500], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (KtDong(a, m, n, m - 1) == 1)
		cout << setw(4) << (m - 1);
}
