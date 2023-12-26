#include<iostream>
#include<iomanip>

using namespace std;
void Tao(float[], int&);
float SoLonNhat(float[], int);
void Xuat(float[], int);

int main()
{
	float a[500];
	int n;
	Tao(a, n);
	Xuat(a, n);
	return 0;
}

void Tao(float a[], int& n)
{
	cout << "Nhap so phan tu cua mang ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << " ";
		cin >> a[i];
	}
}

float SoLonNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = SoLonNhat(a, n - 1);
	if (lc < a[n - 1])
		lc = a[n - 1];
	return lc;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	float lc = SoLonNhat(a, n - 1);
	if (lc < a[n - 1])
	{
		cout << setw(6) << n - 1;
		return;
	}
	if (lc == a[n - 1])
		cout << setw(6) << n - 1;
	Xuat(a, n - 1);
}