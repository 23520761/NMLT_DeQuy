#include<iostream>
#include<cmath>

using namespace std;

int ktTonTai(int[], int);

int main()
{
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int kq = ktTonTai(a, n);
	cout << kq;
	return 0;
}
int ktTonTai(int a[], int n)
{
	if (n <= 1)
		return 0;
	if (a[n - 1] == 0 && a[n - 2] == 0)
		return 1;
	return ktTonTai(a, n - 1);
}