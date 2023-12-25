#include <iostream>
#include <iomanip>
using namespace std;

void NhapMaTran(int[][100], int&, int&);
bool KtNguyenTo(int);
void XuatMaTran(int[][100], int, int);
void LietKe(int[][100], int, int);


int main()
{
	int m;
	int n;
	int a[100][100];
	NhapMaTran(a, m, n);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);
	cout << "\nCac so nguyen to trong ma tran: " << endl;
	LietKe(a, m, n);
	return 0;
}

void NhapMaTran(int a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;	
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

bool KtNguyenTo(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

void XuatMaTran(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(6) << a[i][j];
		cout << endl;
	}
}

void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j  < n; j++)
		if (KtNguyenTo(a[m - 1][j]))
			cout << setw(6) << a[m - 1][j];
}