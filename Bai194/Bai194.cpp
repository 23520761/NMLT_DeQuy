#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[][100], int& m, int&);
void LietKe(int a[][100], int, int);
int ktChinhPhuong(int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}

int ktChinhPhuong(int n)
{
	for (int i = 1; i * i <= n; i++)
		if (i * i == n)
			return true;
	return false;
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

void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktChinhPhuong(a[m - 1][j]))
			cout << setw(5) << a[m - 1][j];
}