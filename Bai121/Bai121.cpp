#include <iostream>
#include <iomanip>

using namespace std;

int DoiXungDau(int[], int);
bool ktDoiXung(int);
void Nhap(int[], int&);
void Xuat(int[], int);

int DoiXungDau(int a[], int n)
{
	if (n == 0)
		return 10;
	int lc = DoiXungDau(a, n - 1);
	if (lc != 10)
		return lc;
	if (ktDoiXung(a[n - 1]))
		return a[n - 1];
	return 10;
}

bool ktDoiXung(int n)
{
	int t = abs(n);
	int dn = 0;
	while (t != 0)
	{
		dn = dn * 10 + t % 10;
		t /= 10;
	}
	if (dn == abs(n))
		return true;
	return false;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	int kq = DoiXungDau(b, k);
	if (kq == 10)
		cout << "Mang khong co gia tri doi xung.";
	else
		cout << "So so doi xung dau tien la: " << kq;
	return 1;
}