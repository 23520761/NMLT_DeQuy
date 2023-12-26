#include <iostream>
using namespace std;

int ktToanChan(int[], int);

int main()
{
	int n;
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << ktToanChan(a, n);
	return 0;
}

int ktToanChan(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
	{
		if (a[n - 1] % 2 == 0)
			return 1;
		return 0;
	}
	if (a[n - 1] % 2 == 0 && ktToanChan(a, n - 1) == 1)
		return 1;
	return 0;
}