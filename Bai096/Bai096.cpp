#include <iostream>
#include <iomanip>
using namespace std;

int DemGiaTri(int[], int);
void Nhap(int[], int&);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << DemGiaTri(a, n);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i + 1 << "]: ";
		cin >> a[i];
	}
}

int DemGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	if (a[n - 1] > 0 && a[n - 1] % 7 == 0)
		dem++;
	return dem;
}


