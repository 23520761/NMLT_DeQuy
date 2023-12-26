#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][100], int&, int&);
void LietKe(int[][100], int, int);
bool ktDang2m(int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "Cac gia tri chan trong ma tran la:\n ";
	LietKe(a, m, n);
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

void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktDang2m(a[m - 1][j]))
			cout << setw(5) << a[m - 1][j];
}

bool ktDang2m(int a)
{
	if (a < 1)
		return false;
	float t = (float)a;
	while (t >= 2)
		t /= 2;
	if (t != 1)
		return false;
	return true;
}