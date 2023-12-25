#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktDang2m(int);
int TongCot(int[][100], int, int);

int main()
{
	int m, n, a[100][100];
	Nhap(a, m, n);

	int k;
	cout << "Nhap cot k: ";
	cin >> k;

	cout << "Tong so dang 2m tren cot " << k << " la:" << TongCot(a, m, k) << endl;
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

bool ktDang2m(int n)
{
	if (n < 1)
		return false;
	for (int i = n; i > 1; i / 2)
		if (i % 2 != 0)
			return false;
	return true;
}

int TongCot(int a[][100], int m, int c)
{
	if (m == 0)
		return 0;
	int s = TongCot(a, m - 1, c);
	if (ktDang2m(a[m - 1][c]))
		s = s + a[m - 1][c];
	return s;
}