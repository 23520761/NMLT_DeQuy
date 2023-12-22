#include<iostream>
#include<cmath>

using namespace std;

int DemKeNhau(int[], int);

int main()
{
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int kq = DemKeNhau(a, n) + 1;
	cout << kq;
	return 0;
}
int DemKeNhau(int a[], int n)
{
	if (n == 1)
		return 0;
	int dem = DemKeNhau(a, n - 1);
	if ((a[n - 1] % 2 == 0) && (a[n - 2] % 2 == 0))
		dem++;
	return dem;
}