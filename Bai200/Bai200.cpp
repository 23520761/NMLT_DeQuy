#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktHoanThien(int);
void LietKe(int[][100], int, int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);
	LietKe(a, m, n);
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

bool ktHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s += i;
	if (s == n)
		return 1;
	return 0;
}

void LietKe(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1, d);
	if (ktHoanThien(a[d][n - 1]))
		cout << setw(4) << a[d][n - 1];
}