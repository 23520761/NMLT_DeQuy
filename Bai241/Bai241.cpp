#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
float DuongDau(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);

	if (DuongDau(a, m, n) == -1)
		cout << "Khong co so duong" << endl;
	else
		cout << "So duong dau tien la: " << DuongDau(a, m, n) << endl;

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

float DuongDau(float a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = DuongDau(a, m - 1, n);
	if (lc != -1)
		return lc;
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0)
			return a[m - 1][j];
	return -1;
}