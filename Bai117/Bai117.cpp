#include<iostream>
#include<iomanip>
using namespace std;
float CuoiCung(float[], int);
void Nhap(float a[], int& n);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	float kq = CuoiCung(a, n);
	cout << "Gia tri am cuoi cung lon hon -1 la: " << kq;
	return 0;
}
float CuoiCung(float a[], int n)
{
	if (n == 0)
		return -1;
	if (a[n - 1] > -1 && a[n - 1] < 0)
		return a[n - 1];
	return(CuoiCung(a, n - 1));
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	cout << endl;
	cout << "\nNhap mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}