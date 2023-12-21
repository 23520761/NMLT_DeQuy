#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMaTran(float[][100], int&, int&);
void XuatMaTran(float[][100], int, int);
void XayDung(float[][100], int, int, float[][100], int&, int&);

int main()
{
	int m;
	int n;
	float a[100][100];
	NhapMaTran(a, m, n);
	float b[100][100];
	int k;
	int l;
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nMa tran B xay dung tu ma tran A sao cho B[i][j] = abs(A[i][j] " << endl;
	XayDung(a, m, n, b, k, l);
	XuatMaTran(b, k, l);

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

void XayDung(float a[][100], int m, int n, float b[][100], int& k, int& l)
{
	if (m == 0)
	{
		k = 0;
		l = n;
		return;
	}
	XayDung(a, m - 1, n, b, k, l);
	for (int j = 0; j < n; j++)
		b[m - 1][j] = abs(a[m - 1][j]);
	k++;
}