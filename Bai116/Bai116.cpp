#include<iostream>
using namespace std;

float DuongCuoi(float[], int);
void Nhap(float[], int&);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	float dc = DuongCuoi(a, n);
	if (dc != -1)
		cout << "gia tri duong cuoi trong mang la :" << dc;
	else
		cout << "Khong co gia tri duong trong mang";
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float DuongCuoi(float a[], int n)
{
	if (n == 1)
		return -1;
	if (a[n - 1] > 0)
		return a[n - 1];
	return DuongCuoi(a, n - 1);
}