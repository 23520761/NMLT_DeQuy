#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
int ktToanChan(int);
void LietKe(int[][100], int, int);

int main()
{
	int m, n, a[100][100];
	Nhap(a, m, n);
	cout << "Day so cac so nguyen toan chan la:" << endl;
	LietKe(a, m, n);
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

int ktToanChan(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	int dv = n % 10;
	if (ktToanChan(n / 10) == 1 && dv % 2 == 0)
		return 1;
	return 0;
}

void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktToanChan(a[m - 1][j]))
			cout << setw(4) << a[m - 1][j];
}
