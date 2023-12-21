#include <iostream>
#include <iomanip>
using namespace std;

void NhapMaTran(int[][500], int&, int&);
bool KtDang5m(int);
void XuatMaTran(int[][500], int, int);
void LietKe(int[][500], int, int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	NhapMaTran(a, m, n);
	int c;
	cout << "Nhap cot can kiem tra: ";
	cin >> c;
	cout << "\nMa tran vua nhap: \n";
	XuatMaTran(a, m, n);
	cout << "Cac so nguyen co dang 5^m tren cot " << c << ": ";
	LietKe(a, m, n, c);

	return 1;
}

void NhapMaTran(int a[][500], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot : ";
	cin >> n;
	cout << "Nhap cac phan tu trong ma tran: \n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
}

bool KtDang5m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	for (int t = n; t > 1; t /= 5)
	{
		int du = t % 5;
		if (du != 0)
			flag = false;
	}
	return flag;
}

void XuatMaTran(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}


void LietKe(int a[][500], int m, int n, int c)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n, c);
	if (KtDang5m(a[m - 1][c]))
		cout << setw(4) << a[m - 1][c];
}
