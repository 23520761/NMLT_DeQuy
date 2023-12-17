#include <iostream>
#include <iomanip>
using namespace std;

void NhapMaTran(int[][100], int&, int&);
bool KtDang3m(int);
void XuatMaTran(int[][100], int, int);
void LietKe(int[][100], int, int, int);


int main()
{
	int m;
	int n;
	int a[100][100];
	int d;
	NhapMaTran(a, m, n);
	cout << "Nhap dong can kiem tra: ";
	cin >> d;
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);
	cout << "\nCac gia tri co dang 3^m tren dong: " << endl;
	LietKe(a, m, n, d);
	return 0;
}

void NhapMaTran(int a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

bool KtDang3m(int n)
{
	int flag = 1;
	int t = n;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = 0;
		t = t / 3;
	}
	if (flag == 1)
		return true;
	return false;
}

void XuatMaTran(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(6) << a[i][j];
		cout << endl;
	}
}

void LietKe(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1, d);
	if (KtDang3m(a[d][n - 1]))
		cout << setw(6) << a[d][n - 1];
}