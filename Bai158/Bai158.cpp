#include<iostream>
using namespace std;
void DuongTang(float[], int);
void Nhap(float[], int&);
int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	DuongTang(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i];
	return 0;
}
void DuongTang(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] > 0 && a[n - 1] > 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	DuongTang(a, n - 1);
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
}