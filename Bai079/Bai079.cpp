#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void NhapMang(int [], int&);
bool KtChinhPhuong(int);
void LietKe(int [], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	cout << "Cac vi tri la so chinh phuong trong mang la: ";
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

bool KtChinhPhuong(int n)
{
	for (int i = 1; i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (KtChinhPhuong(a[n - 1]))
		cout << setw(3) << n - 1;
}