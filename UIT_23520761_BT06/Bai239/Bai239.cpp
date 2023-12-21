#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
float LonNhat(float[][500], int, int);

int main()
{
	int m;
	int n;
	float a[500][500];
	NhapMaTran(a, m, n);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);

	float kq = LonNhat(a, m, n);
	cout << "\nGia tri lon nhat trong ma tran: " << kq;

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

float LonNhat(float a[][500], int m, int n)
{
	if (m == 0)
		return 0;
	if (m == 1)
	{
		float lc = a[0][0];
		for (int j = 0; j < n; j++)
			if (a[0][j] > lc)
				lc = a[0][j];
		return lc;
	}
	float lc = LonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > lc)
			lc = a[m - 1][j];
	return lc;
}