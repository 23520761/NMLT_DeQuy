#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
int ChuSoDau(int);
int DemGiaTri(int[][100], int, int, int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);

	int k;
	cout << "Nhap cot k:";
	cin >> k;

	cout << "So luong so co chu so chan dau tien tren cot " << k << " la: " << DemGiaTri(a, m, n, k) << endl;

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

int ChuSoDau(int n)
{
	int t = abs(n);
	if (n <= 9)
		return n;
	while (t >= 9)
		t /= 10;

}

int DemGiaTri(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int dem = DemGiaTri(a, m - 1, n, c);
	if (ChuSoDau(a[m - 1][c]) % 2 == 0)
		dem = dem + 1;
	return dem;
}