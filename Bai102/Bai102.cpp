#include<iostream>
#include<iomanip>
using namespace std;
int DemGiaTri(float[], int);
void Nhap(float[], int&);
float Max(float[], int);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	int kq = DemGiaTri(a, n);
	cout << "So luong gia tri lon nhat trong mang 1 chieu la :" << kq;
	return 0;
}
int DemGiaTri(float a[], int n)
{
	if (n == 0)
		return 0;
	float M = Max(a, n - 1);
	if (M < a[n - 1])
		return 1;
	int dem = DemGiaTri(a, n - 1);
	if (a[n - 1] == M)
		dem++;
	return dem;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float Max(float a[], int n)
{
	if (n == 1)
		return a[0];
	float M = Max(a, n - 1);
	if (a[n - 1] > M)
		return a[n - 1];
	return M;
}