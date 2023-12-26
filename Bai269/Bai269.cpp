#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[][100], int&, int&);
void Swap(float&, float&);
void SwapCot(float[][100], int, int, int, int);
void LietKe(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);

	int x;
	cout << "Vi tri cot muon doi (1): ";
	cin >> x;

	int y;
	cout << "Vi tri cot muon doi (2): ";
	cin >> y;

	SwapCot(a, m, n, x, y);
	LietKe(a, m, n);

	return 0;
}

void Nhap(float a[][100], int& m, int& n)
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

void Swap(float& a, float& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void SwapCot(float a[][100], int m, int n, int x, int y)
{
	if (m == 0)
		return;
	SwapCot(a, m - 1, n, x, y);
	Swap(a[m - 1][x], a[m - 1][y]);
}

void LietKe(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setw(4) << a[m - 1][j];
	cout << endl;
}