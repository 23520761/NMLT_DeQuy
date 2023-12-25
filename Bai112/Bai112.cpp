#include<iostream>
#include<iomanip>
using namespace std;

int DauTien(float[], int);
void Nhap(float a[], int& n);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	int kq = DauTien(a, n);
	cout << "Gia tri dau tien lon hon 2003 trong mang la: " << kq;
	return 0;
}
int DauTien(float a[], int n)
{
	if (n == 0)
		return 0;
	int lc = DauTien(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] > 2003)
		return a[n - 1];
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	cout << endl;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}