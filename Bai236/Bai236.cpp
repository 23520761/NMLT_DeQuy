#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktNguyenTo(int);
int DemNguyenTo(int[][100], int, int, int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);
	int k;
	cout << "Nhap cot k:";
	cin >> k;
	cout << "So luong so nguyen to tren cot " << k << " la: " << DemNguyenTo(a, m, n, k) << endl;
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
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

bool ktNguyenTo(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= n / 2; ++i)
		if (n % i == 0)
			return false;
	return true;
}

int DemNguyenTo(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int dem = DemNguyenTo(a, m - 1, n, c);
	if (ktNguyenTo(a[m - 1][c]))
		dem = dem + 1;
	return dem;
}