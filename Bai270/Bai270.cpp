#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void SapDongTang(float[][100], int, int, int);

int main()
{
	int m, n, d;
	float a[100][100];
	Nhap(a, m, n);
	cout << "Nhap d: ";
	cin >> d;
	SapDongTang(a, m, n, d);
	Xuat(a, m, n);
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

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

void SapDongTang(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return;
	for (int j = 0; j <= n - 2; j++)
		if (a[d][j] > a[d][n - 1])
			swap(a[d][j], a[d][n - 1]);
	SapDongTang(a, m, n - 1, d);
}