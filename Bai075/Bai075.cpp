#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void NhapMang(int [], int&);
bool KtToanLe(int);
void LietKe(int [], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	cout << "Cac so toan le trogn mang la: ";
	LietKe(a, n);

	return 1;
}

void NhapMang(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap cac phan tu trong mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

bool KtToanLe(int n)
{
	for (int t = n; t != 0; t /= 10)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			return false;
	}
	return true;
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (KtToanLe(a[n - 1]))
		cout << setw(3) << a[n - 1];
}