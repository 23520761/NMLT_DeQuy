#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
float Tong(float[][100], int, int, float, float);

int main()
{
	float a[100][100];
	int m, n;
	float x, y;
	Nhap(a, m, n);
	cout << "Nhap doan can kiem tra: ";
	cout << "\nx= ";
	cin >> x;
	cout << "y= ";
	cin >> y;
	cout << "Tong cac gia tri nam trong doan tu [" << x << "," << y << "] trong ma tran : " << Tong(a, m, n, x, y) << endl;
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

float Tong(float a[][100], int m, int n, float x, float y)
{
	if (m == 0)
		return 0;
	float s = Tong(a, m - 1, n, x, y);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] >= x && a[m - 1][j] <= y)
			s = s + a[m - 1][j];
	return s;
}