#include <iostream>
using namespace std;

int ktKhong(int[], int);

int main()
{
	int n;
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << ktKhong(a, n);
	return 0;
}

int ktKhong(int a[], int n)
{
	if (n == 0)
		return 0;
	if (a[n - 1] == 0)
		return 1;
	return ktKhong(a, n - 1);
}