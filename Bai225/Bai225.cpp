#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktChinhPhuong(int);
int DemChinhPhuong(int[][100], int, int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);
	cout << DemChinhPhuong(a, m, n);
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

bool ktChinhPhuong(int k)
{
	bool flag = 0;
	for (int i = 0; i <= k; i++)
		if (i * i == k)
			flag = 1;
	return flag;
}

int DemChinhPhuong(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemChinhPhuong(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktChinhPhuong(a[m - 1][j]))
			dem = dem + 1;
	return dem;
}