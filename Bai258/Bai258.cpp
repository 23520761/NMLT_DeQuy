#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int, int);
int ktDong(int[][100], int, int, int);
void LietKe(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	cin >> m >> n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}

void Nhap(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

int ktDong(int a[][100], int m, int n, int x)
{
	if (n == 0)
		return 0;
	if (a[x][n - 1] % 2 == 0)
		return 1;
	return ktDong(a, m, n - 1, x);
}

void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (ktDong(a, m, n, m - 1))
		cout << setw(4) << a[m - 1][n - 1];
}