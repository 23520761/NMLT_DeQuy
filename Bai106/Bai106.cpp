#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&, int&);
float XaNhat(float[], int, int);

int main()
{
	float* a = new float[100];
	int n, x;
	Nhap(a, n, x);
	float kq = XaNhat(a, n, x);
	cout << "Gia tri xa x nhat la: " << kq;
	delete[]a;
	return 1;
}

void Nhap(float a[], int& n, int& x)
{
	cout << "Nhap so luong phan tu trong mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu a[" << i << "] = ";
		cin >> a[i];
	}
	cout << "Nhap phan tu x: ";
	cin >> x;
}

float XaNhat(float a[], int n, int x)
{
	if (n == 1)
		return a[0];
	float lc = XaNhat(a, n - 1, x);
	if (abs(a[n - 1] - x) > abs(lc - x))
		lc = a[n - 1];
	return lc;
}