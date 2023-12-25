#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
int ktCotTang(float[][100], int, int, int);
void LietKe(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);

	cout << "Cac cot thoa dieu kien tang dan: " << endl;
	LietKe(a, m, n);

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

int ktCotTang(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return 1;
	if (a[m - 2][c] <= a[m - 1][c] &&
		ktCotTang(a, m - 1, n, c) == 1)
		return 1;
	return 0;
}

void LietKe(float a[][100], int m, int n)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1);
	if (ktCotTang(a, m, n, n - 1) == 1)
		cout << setw(4) << (n - 1);
}