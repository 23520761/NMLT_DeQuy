#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void LietKe(int[][100], int, int);

int main()
{
	int m, n, a[100][100];
	Nhap(a, m, n);

	int k;
	cout << "Nhap cot k can liet ke: ";
	cin >> k;

	cout << "Day so cac so chan tren cot " << k << " la:" << endl;
	LietKe(a, m, k);
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

void LietKe(int a[][100], int m, int k)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, k);
	if (a[m - 1][k] % 2 == 0)
		cout << setw(4) << a[m - 1][k];
}