#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
int DemDuong(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);

	cout << "So luong so duong trong ma tran: " << DemDuong(a, m, n) << endl;
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

int DemDuong(float a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemDuong(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0)
			dem = dem + 1;
	return dem;
}