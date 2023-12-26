#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
int ChanLonNhat(int[][100], int, int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);

	if (ChanLonNhat(a, m, n) == -1)
		cout << "Khong co so chan" << endl;
	else
		cout << "So chan lon nhat la: " << ChanLonNhat(a, m, n) << endl;

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

int ChanLonNhat(int a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = ChanLonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 == 0)
			if (lc == -1 || a[m - 1][j] > lc)
				lc = a[m - 1][j];
	return lc;
}