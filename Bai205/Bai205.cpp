#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
float TichLe(int[][100], int, int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);
	cout << TichLe(a, m, n);
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

float TichLe(int a[][100], int m, int n)
{
	if (m == 0)
		return 1;
	int T = TichLe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 != 0 && (m - 1) % 2 == 0)
			T = T * a[m - 1][j];
	return T;
}