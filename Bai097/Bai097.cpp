#include<iostream>
#include<iomanip>
using namespace std;
int DemGiaTri(int[], int);
void Nhap(int[], int&);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = DemGiaTri(a, n);
	cout << "DemGiaTri cac phan tu duong trong mang 1 chieu la :" << kq;
	return 0;
}
int DemGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	if (a[n - 1] % 10 == 5)
		dem++;
	return dem;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}