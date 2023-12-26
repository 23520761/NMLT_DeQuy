#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktDang(int);
int ktCot(int[][100], int, int, int);
void LietKe(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
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

int ktCot(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	if (ktDang(a[m - 1][c]))
		return 1;
	return ktCot(a, m - 1, n, c);
}

bool ktDang(int n)
{
	for (int i = 1; i * i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

void LietKe(int a[][100], int m, int n)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1);
	if (ktCot(a, m, n, n - 1) == 1)
		cout << setw(5) << n - 1;
}