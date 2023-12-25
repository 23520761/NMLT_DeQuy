#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
int TongCot(int[][100], int, int, int);

int main()
{
	int m, n, c;
	int a[100][100];
	Nhap(a, m, n);
	cout << "Nhap c: ";
	cin >> c;
	cout << TongCot(a, m, n, c);
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

int TongCot(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int s = TongCot(a, m - 1, n, c);
	if (a[m - 1][c] % 2 != 0)
		s = s + a[m - 1][c];
	return s;
}