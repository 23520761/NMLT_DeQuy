#include<iostream>
#include<iomanip>

using namespace std;
void Nhap(int[], int);
void Xuat(int[], int);

int main()
{
	return 0;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	if (a[n - 1] % 2 == 0)
		cout << setw(6) << a[n - 1];
}