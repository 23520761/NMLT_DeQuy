#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int, int);
void LietKe(int[][500], int, int, int);
int main()
{
	int a[500][500];
	int m, n, d;
	cin >> m >> n >> d;
	Nhap(a, m, n);
	LietKe(a, m, n, d);
	return 0;
}

void Nhap(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void LietKe(int a[][500], int m, int n, int d)
{
	if (m == 0)
		return;
	LietKe(a, m, n - 1, d);
	if (a[d][n - 1] % 2 == 0)
		cout << setw(4) << a[d][n - 1];
}