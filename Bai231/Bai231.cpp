#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
int TanSuat(float[][500], int, int, float);

int main()
{
	int m;
	int n;
	float a[500][500];
	NhapMaTran(a, m, n);
	float x;
	cout << "Gia tri can tim: ";
	cin >> x;

	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);

	int kq = TanSuat(a, m, n, x);
	cout << "\nTan suat gia tri (x = " << x << ") trong ma tran: " << kq;

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

int TanSuat(float a[][500], int m, int n, float x)
{
	if (m == 0)
		return 0;
	int dem = TanSuat(a, m - 1, n, x);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] == x)
			dem += 1;
	return dem;
}