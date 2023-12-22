#include <iostream>
using namespace std;

bool ktToanLe(int);
int TimGiaTri(int[], int);

int main()
{
	int n;
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Gia tri: " << TimGiaTri(a, n);
	return 0;
}

bool ktToanLe(int k)
{
	k = abs(k);
	if (k <= 9)
	{
		if (k % 2 != 0)
			return 1;
		return 0;
	}
	int dv = k % 10;
	if (ktToanLe(k / 10) == 1 && dv % 2 != 0)
		return 1;
	return 0;
}

int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (!ktToanLe(a[n - 1]))
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}