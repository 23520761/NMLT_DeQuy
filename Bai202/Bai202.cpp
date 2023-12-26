#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][100], int&, int&);
void LietKe(int[][100], int, int, int);
bool ktDoiXung(int);

int main()
{
	int a[100][100];
	int m, n, c;
	Nhap(a, m, n);
	cout << "\nNhap cot can kiem tra: ";
	cin >> c;

	cout << "Cac gia tri doi xung tren cot " << c << " la: ";
	LietKe(a, m, n, c);
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "\nNhap so cot: ";
	cin >> n;
	cout << "\nNhap Mang: ";
	cout << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void LietKe(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n, c);
	if (ktDoiXung(a[m - 1][c]))
		cout << setw(4) << a[m - 1][c];
}

bool ktDoiXung(int a)
{
	if (a <= 9)
		return true;
	int s = 0;
	int t = a;
	while (t != 0)
	{
		s = s * 10 + t % 10;
		t /= 10;
	}
	if (s == a)
		return true;
	return false;
}