#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
int ktDongTang(float[][100], int, int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);

	int d;
	cout << "Nhap dong d: ";
	cin >> d;

	if (ktDongTang(a, m, n, d) == 1)
		cout << "Dong " << d << " tang dan";
	else
		cout << "Dong " << d << " khong tang dan";

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

int ktDongTang(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return 1;
	if (a[d][n - 2] <= a[d][n - 1] &&
		ktDongTang(a, m, n - 1, d) == 1)
		return 1;
	return 0;
}