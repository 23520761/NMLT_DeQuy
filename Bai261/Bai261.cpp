#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);

int ktDong1(float a[][100], int m, int n, int d);
int ktDong2(float a[][100], int m, int n, int d);
int ktDong3(float a[][100], int m, int n, int d);
int ktDong(float[][100], int, int, int);

void LietKe(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);

	cout << "Cac dong thoa dieu kien co so am, duong, 0: " << endl;
	LietKe(a, m, n);

	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

int ktDong1(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (a[d][n - 1] < 0)
		return 1;
	return ktDong1(a, m, n - 1, d);
}

int ktDong2(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (a[d][n - 1] > 0)
		return 1;
	return ktDong2(a, m, n - 1, d);
}

int ktDong3(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (a[d][n - 1] == 0)
		return 1;
	return ktDong3(a, m, n - 1, d);
}

int ktDong(float a[][100], int m, int n, int d)
{
	if (ktDong1(a, m, n, d) == 1 && ktDong2(a, m, n, d) == 1 && ktDong3(a, m, n, d) == 1)
		return 1;
	return 0;
}

void LietKe(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (ktDong(a, m - 1, n, m - 1) == 1)
		cout << setw(4) << (m - 1);
}