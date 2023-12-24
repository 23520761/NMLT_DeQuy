#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool KtGiam(int[], int);

int main()
{
	int* a = new int[100];
	int n;
	Nhap(a, n);
	if (KtGiam(a, n))
		cout << "Mang giam dan";
	else
		cout << "Mang khong giam dan";
	delete[]a;
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu trong mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}

bool KtGiam(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if ((a[n - 2] >= a[n - 1]) && KtGiam(a, n - 1) == 1)
		return 1;
	return 0;
}