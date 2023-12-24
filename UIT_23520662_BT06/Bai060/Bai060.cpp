#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Nhap(float[], int&);
void Xuat(float);
float TimGiaTriX(float[], int, int, int);

float main()
{
	float n[500];
	int a;
	int x;
	cout << "Nhap gia tri x: ";
	cin >> x;
	Nhap(n, a);
	Xuat(TimGiaTriX(n, 0, a - 1, x));
}

float TimGiaTriX(float n[500], int left, int right, int x)
{
	if (right >= left)
	{
		int mid = left + (right - left) / 2;
		if (n[mid] == x)
			return mid;
		if (n[mid] > x)
			return TimGiaTriX(n, left, mid - 1, x);
		if (n[mid] < x)
			return TimGiaTriX(n, mid + 1, right, x);
	}
	return -1;
}

void Nhap(float n[500], int& a)
{
	cout << "Nhap n: ";
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> n[i];
	}
}

void Xuat(float n)
{
	cout << "Ket qua la: ";
	cout << n;
}