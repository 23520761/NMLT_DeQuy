#include<iostream>
#include<cmath>

using namespace std;

void SapTang(float[], int);

int main()
{
	float a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	SapTang(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
void SapTang(float a[], int n)
{
	if (n == 1)
	{
		return;
	}
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	}
	SapTang(a, n - 1);
}