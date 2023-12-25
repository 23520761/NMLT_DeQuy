#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void NhapMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool KtNguyenTo(int);
int TongNguyenTo(int[][500], int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	NhapMaTran(a, m, n);
	cout << "\nMa tran vua nhap: \n";
	XuatMaTran(a, m, n);
	int kq = TongNguyenTo(a, m, n);
	cout << "Tong cac so nguyen to trong ma tran: " << kq << endl;

	return 1;
}

void NhapMaTran(int a[][500], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot : ";
	cin >> n;
	cout << "Nhap cac phan tu trong ma tran: \n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
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

bool KtNguyenTo(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

int TongNguyenTo(int a[][500], int m, int n)
{
	if (m == 0)
		return 0;
	int s = TongNguyenTo(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (KtNguyenTo(a[m - 1][j]))
			s = s + a[m - 1][j];
	return s;
}
