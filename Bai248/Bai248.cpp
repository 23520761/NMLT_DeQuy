#include <iostream>
using namespace std;

void Nhap(int[][500], int, int);
bool ktNguyenTo(int);
int NguyenToLonNhat(int a[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	cin >> m >> n;
	Nhap(a, m, n);
	cout << NguyenToLonNhat(a, m, n);
	return 0;
}
void Nhap(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

bool ktNguyenTo(int n)
{
	if (n < 2)
		return;
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int NguyenToLonNhat(int a[][500], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = NguyenToLonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[m - 1][j]))
			if (lc < a[m - 1][j] || lc = -1)
				lc = a[m - 1][j];
	return lc;
}