#include<iostream>
#include<cmath>

using namespace std;

void DuaVeCuoi(int[], int);
int ktNguyenTo(int);

int main()
{
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	DuaVeCuoi(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
void DuaVeCuoi(int a[], int n)
{
	if (n == 0)
		return;
	if (ktNguyenTo(a[n - 1]) == 1)
	{
		DuaVeCuoi(a, n - 1);
		return;
	}
	for (int i = 0; i <= n - 2; i++)
	{
		if (ktNguyenTo(a[i]))
		{
			swap(a[n - 1], a[i]);
			break;
		}
	}
	DuaVeCuoi(a, n - 1);
}
int ktNguyenTo(int n)
{
	if (n <= 1)
		return 0;
	int dem = 1;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	if (dem == 2)
		return 1;
	return 0;
}