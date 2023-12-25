#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
float TongDong(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	int k;
	cout << "Nhap cot k: ";
	cin >> k;
	cout << "Tong gia tri tren dong " << k << " la:" << TongDong(a, n, k) << endl;
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

float TongDong(float a[][100], int n, int d)
{
	if (n == 0)
		return 0;
	float s = TongDong(a, n - 1, d);
	s = s + a[d][n - 1];
	return s;
}