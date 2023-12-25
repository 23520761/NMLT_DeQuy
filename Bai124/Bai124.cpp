#include <iostream>
using namespace std;

void Nhap(int[], int&);
bool ktNguyenTo(int);
int NguyenToCuoi(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = NguyenToCuoi(a, n);
	if (kq == 0)
		cout << "khong co so nguyen to";
	else
		cout << "So nguyen to cuoi la: " << kq;
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] : ";
		cin >> a[i];
	}
}

bool ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int NguyenToCuoi(int a[], int n)
{
	if (n == 0)
		return 0;
	if (ktNguyenTo(a[n - 1]))
		return a[n - 1];
	return NguyenToCuoi(a, n - 1);
}