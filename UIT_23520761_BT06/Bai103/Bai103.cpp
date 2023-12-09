#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(float[], int&);
float LonNhat(float[], int);

int main()
{
	int n;
	float a[500];
	NhapMang(a, n);
	float kq = LonNhat(a, n);
	cout << "Gia tri lon nhat trong mang: " << kq;
	
	return 0;
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

float LonNhat(float a[], int n)
{
	if (n == 1)
		return a[0];
	int lc = (a, n - 1);
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}
