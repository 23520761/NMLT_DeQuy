#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktDang(int);
int ChinhPhuongMax(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	int kq = ChinhPhuongMax(a, m, n);
	if (kq == -1)
		cout << "khong co so chinh phuong";
	else
		cout << kq << " la so chinh phuong lon nhat";
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
	for (int i = 1; i * i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

int ChinhPhuongMax(int a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = ChinhPhuongMax(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktDang(a[m - 1][j]))
			if (lc == -1 || a[m - 1][j] > lc)
				lc = a[m - 1][j];
	return lc;
}