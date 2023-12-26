#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][100], int&, int&);
void SapCotTang(float[][100], int, int, int);
void Xuat(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n, c;

	Nhap(a, m, n);
	cout << "Nhap cot can sap xep:";
	cin >> c;
	SapCotTang(a, m, n, c);
	Xuat(a, m, n);
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

void SapCotTang(float a[][100], int m, int n, int d)
{
	if (m == 1 or m == 0)
		return;
	for (int i = 0; i <= m - 2; i++)
		if (a[i][d] > a[m - 1][d])
			swap(a[i][d], a[m - 1][d]);
	SapCotTang(a, m - 1, n, d);
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << setw(5) << a[i][j];
	}
}