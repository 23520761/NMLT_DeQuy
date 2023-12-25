#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktDang2m(int);
int DemDang2m(int[][100], int, int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);
	cout << DemDang2m(a, m, n);
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

bool ktDang2m(int k)
{
	if (k < 1)
		return 0;
	bool flag = 1;
	for (int i = k; i > 1; i /= 2)
		if (i % 2 != 0)
			flag = 0;
	return flag;
}

int DemDang2m(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemDang2m(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktDang2m(a[m - 1][j]))
			dem = dem + 1;
	return dem;
}	