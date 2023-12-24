#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&, int&);
void Xuat(float[][100], int, int);
void ThemCot(float[][100], int, int&, int);

int main()
{
	int m, n, c;
	float a[100][100];
	Nhap(a, m, n, c);
	ThemCot(a, m, n, c);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][100], int& m, int& n, int& c)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "Nhap cot: ";
	cin >> c;
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

void ThemCot(float a[][100], int m, int& n, int c)
{
	if (m == 0)
	{
		n++;
		return;
	}
	ThemCot(a, m - 1, n, c);
	for (int j = n; j > c; j--)
		a[m - 1][j] = a[m - 1][j - 1];
	a[m - 1][c] = 0;
}
