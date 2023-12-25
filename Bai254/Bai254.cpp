#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktDang(int);
int TonTai(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	int kq = TonTai(a, m, n);
	if (kq == 0)
		cout << "khong co so hoan thien";
	else
		cout << "Ton tai so hoan thien";
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
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s = s + i;
	if (s == n)
		return true;
	return false;
}

int TonTai(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	for (int j = 0; j < n; j++)
		if (ktDang(a[m - 1][j]))
			return 1;
	return TonTai(a, m - 1, n);
}