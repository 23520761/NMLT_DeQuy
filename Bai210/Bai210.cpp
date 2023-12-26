#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
float TongDuong(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);
	cout << TongDuong(a, m, n);
	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

float TongDuong(float a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	float s = TongDuong(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0)
			s = s + a[m - 1][j];
	return s;
}