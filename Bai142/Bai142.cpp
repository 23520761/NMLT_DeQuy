#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool KtraChan(int[], int);

int main()
{
	int* a = new int[100];
	int n;
	Nhap(a, n);
	if (KtraChan(a, n))
		cout << "Mang ton tai chan";
	else
		cout << "Mang khong ton tai chan";
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

bool KtraChan(int a[], int n)
{
	if (n == 0)
		return 0;
	if (a[n - 1] % 2 == 0)
		return 1;
	return KtraChan(a, n - 1);
}