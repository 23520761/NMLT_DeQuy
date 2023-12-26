#include <iostream>
using namespace std;

void Xuat(int[], int);

int main()
{
	int a[100];
	int n;
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
	Xuat(a, n);
	return 0;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << endl;
	cout << "a[" << n - 1 << "] = " << a[n - 1];
}