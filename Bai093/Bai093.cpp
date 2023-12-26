#include<iostream>
#include<cmath>

using namespace std;

float TongGiaTri(float[], int);

int main()
{
	float a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	float kq = TongGiaTri(a, n);
	cout << kq;
	return 0;
}
float TongGiaTri(float a[], int n)
{
	if (n <= 1)
		return n;
	float s = TongGiaTri(a, n - 1);
	if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	return s;
}