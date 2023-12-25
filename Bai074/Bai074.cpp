#include<iostream>
#include<iomanip>

using namespace std;
void Tao(int[], int&);
int ChuSoDau(int);
void Xuat(int[], int);

int main()
{
	int a[500];
	int n;
	Tao(a, n);
	Xuat(a, n);
	return 0;
}

void Tao(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1<<" ";
		cin >> a[i];
	}
}

int ChuSoDau(int a)
{
	a = abs(a);
	while (a > 10)
		a = a / 10;
	return a;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 == 0)
		cout << setw(8) << a[n - 1];
}