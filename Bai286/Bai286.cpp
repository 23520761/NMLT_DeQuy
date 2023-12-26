#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);

void NguyenHoa(float[][100], int, int);

int main()
{

	int m, n;
	float a[100][100];
	Nhap(a, m, n);

	NguyenHoa(a, m, n);

	cout << "Mang sau khi nguyen hoa: " << endl;
	Xuat(a, m, n);

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

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(10) << a[i][j];
		cout << endl;
	}
}

void NguyenHoa(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	NguyenHoa(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0)
			a[m - 1][j] = int(a[m - 1][j] + 0.5);
		else
			a[m - 1][j] = int(a[m - 1][j] - 0.5);
}