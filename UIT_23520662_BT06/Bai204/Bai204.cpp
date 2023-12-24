#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[][100], int& m, int&);
int Tong(int a[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "Tong cac so chan: " << Tong(a, m, n);
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

int Tong(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s = Tong(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 == 0)
			s = s + a[m - 1][j];
	return s;
}