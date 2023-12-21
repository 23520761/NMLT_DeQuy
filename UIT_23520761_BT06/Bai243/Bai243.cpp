#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
float LonDongNhat(float[][500], int, int, int);

int main()
{
	int m;
	int n;
	float a[500][500];
	NhapMaTran(a, m, n);
	int d;
	cout << "Nhap dong can tim: ";
	cin >> d;

	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);

	float kq = LonDongNhat(a, m, n, d);
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

float LonDongNhat(float a[][500], int m, int n, int d)
{
	if (n == 1)
		return a[d][0];
	float lc = LonDongNhat(a, m, n - 1, d);
	if (a[d][n - 1] > lc)
		lc = a[d][n - 1];
	return lc;
}