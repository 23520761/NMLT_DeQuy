#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void NhapMang(float[], int&);
float NhoNhat(float[], int);
void LietKe(float[], int);

int main()
{
	int n;
	float a[500];
	NhapMang(a, n);
	cout << "Cac vi tri la gia tri nho nhat trong mang la: ";
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

float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}

void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	float lc = NhoNhat(a, n - 1);
	// kiem tra gia tri nho nhat cua mang a[0] -> a[n-2] co lon a[n-1] hay khong
	// neu lon hon thi in ra vi tri n-1 vì tai n - 1 la gia tri nho nhat trong mang
	if (lc > a[n - 1])
	{
		cout << setw(6) << n - 1;
		return;
	}
	// neu cac gia tri tong mang a[0] -> a[n-2] bang a[n-1]
	// xuat ra vi tri cua tat ca cac gia tri nho nhat
	if (lc == a[n - 1])
		cout << setw(6) << n - 1;
	LietKe(a, n - 1);
}