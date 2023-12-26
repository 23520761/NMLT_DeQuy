#include<iostream>
#include<iomanip>
using namespace std;
int DauTien(int[], int);
void Nhap(int a[], int& n);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = DauTien(a, n);
	cout << "Gia tri le dau tien la: " << kq;
	return 0;
}
int DauTien(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = DauTien(a, n - 1);
	if (s != 0)
		return s;
	if (a[n - 1] % 2 != 0)
		return a[n - 1];
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	cout << "Nhap mang: ";
	cout << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}