#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktDang(int);
int Tong(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "Tong cac so co dang 3^m: " << Tong(a, m, n);
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
}

bool ktDang(int n)
{
	int t = n;
	int dt = 0;

	while (t > 1)
	{
		dt = t % 3;
		if (dt != 0)
			return false;
		t = t / 3;
	}
	return true;
}

int Tong(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s = Tong(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktDang(a[m - 1][j]))
			s = s + a[m - 1][j];
	return s;
}