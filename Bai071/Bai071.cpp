#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void NhapMang(float [], int&);
void LietKe(float [], int);

int main()
{
	int n;
	float a[500];
	NhapMang(a, n);
	cout << "Cac so am trong mang la: ";
	LietKe(a, n);
	return 1;
}

void NhapMang(float a[], int& n)
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

void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (a[n - 1] < 0)
		cout << setw(10) << setprecision(3) << a[n - 1];
}