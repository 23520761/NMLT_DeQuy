#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
int NguyenToDau(int[][100], int, int);
bool ktNguyenTo(int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);

	if (NguyenToDau(a, m, n) == -1)
		cout << "Khong co so duong" << endl;
	else
		cout << "So nguyen to dau tien la: " << NguyenToDau(a, m, n) << endl;

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

int NguyenToDau(int a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int N = NguyenToDau(a, m - 1, n);
	if (N != -1)
		return N;
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[m - 1][j]))
			return a[m - 1][j];
	return -1;
}

bool ktNguyenTo(int n)
{
	if (n <= 1)
		return false;
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}