#include <iostream>
using namespace std;

bool ktHoanThien(int);
int HoanThienDau(int[], int);

int main()
{
	int n;
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Hoan thien dau: " << HoanThienDau(a, n);
	return 0;
}

bool ktHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s += i;
	if (s == n)
		return 1;
	return 0;
}

int HoanThienDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = HoanThienDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (ktHoanThien(a[n - 1]) == 1)
		return a[n - 1];
	return -1;
}