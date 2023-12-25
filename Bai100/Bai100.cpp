#include <iostream>
#include <iomanip>
using namespace std;

int DemNguyenTo(int[], int);
void Nhap(int[], int&);
bool ktNguyenTo(int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << DemNguyenTo(a, n);
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

int DemNguyenTo(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemNguyenTo(a, n - 1);
	if (ktNguyenTo(a[n - 1]))
		dem++;
	return dem;
}

bool ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	else
		return false;
}




