#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int DemPhanBiet(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "So diem phan biet: " << DemPhanBiet(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int DemPhanBiet(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	int dem = DemPhanBiet(a, n - 1);

	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (a[n - 1] == a[i])
			flag = 0;
	if (flag == 1)
		dem++;
	return dem;
}