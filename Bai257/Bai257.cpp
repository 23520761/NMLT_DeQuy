#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
int ktCotGiam(float[][100], int, int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);

	int d;
	cout << "Nhap cot d: ";
	cin >> d;
	if (ktCotGiam(a, m, n, d) == 1)
		cout << "cot " << d << " giam dan";
	else
		cout << "cot " << d << " khong giam dan";

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

int ktCotGiam(float a[][100], int m, int n, int d)
{
	if (m == 1)
		return 1;
	if (a[m - 2][d] >= a[m - 1][d] &&
		ktCotGiam(a, m - 1, n, d) == 1)
		return 1;
	return 0;
}