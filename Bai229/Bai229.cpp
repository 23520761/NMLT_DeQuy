#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[][100], int&, int&);
int Dem(int[][100], int, int);
bool ktDang(int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "So luong so co cac chu so toan chan: " << Dem(a, m, n);
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
}

bool ktDang(int n)
{
	int t = abs(n);
	int dv = 0;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 != 0)
			return false;
		t = t / 10;
	}
	return true;
}

int Dem(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = Dem(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktDang(a[m - 1][j]))
			dem++;
	return dem;
}