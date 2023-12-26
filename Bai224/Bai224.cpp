#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
float Tich(float[][100], int, int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	int c;
	cout << "Nhap cot muon tinh: ";
	cin >> c;
	cout << "Tich cac so thuoc doan [-1, 0]: " << Tich(a, m, n, c);
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

float Tich(float a[][100], int m, int n, int c)
{
	if (m == 0)
		return 1;
	float s = Tich(a, m - 1, n, c);
	if (a[m - 1][c] >= -1 && a[m - 1][c] <= 0)
		s = s * a[m - 1][c];
	return s;
}