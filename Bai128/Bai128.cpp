#include<iostream>
#include<iomanip>
using namespace std;

int  DuongNhoNhat(int[], int);
void Nhap(int[], int&);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = DuongNhoNhat(a, n);
	if (kq != 0)
		cout << "gia tri co chu so dau tien le la :" << kq;
	else
		cout << "khong co gia tri le dau";
	return 0;
}

int DuongNhoNhat(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = DuongNhoNhat(a, n - 1);
	if (a[n - 1] <= 0)
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] < lc)
		lc = a[n - 1];
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
}
