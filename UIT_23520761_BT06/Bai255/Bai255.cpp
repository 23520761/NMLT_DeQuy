#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
int KtToanDuong(float[][500], int, int);

int main()
{
	int m;
	int n;
	float a[500][500];
	NhapMaTran(a, m, n);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);
	if (KtToanDuong(a, m, n) == 1)
		cout << "Ma tran toan duong";
	else
		cout << "Ma tran khong toan duong";

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

int KtToanDuong(float a[][500], int m, int n)
{
	if (m == 0)
		return 0;
	if (m == 1)
	{
		int flag = 1;
		for (int j = 0; j < n; j++)
			if (a[0][j] <= 0)
				flag = 0;
		return flag;
	}
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] <= 0)
			return 0;
	return KtToanDuong(a, m - 1, n);
}