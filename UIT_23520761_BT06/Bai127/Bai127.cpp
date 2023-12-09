#include <iostream>
using namespace std;

void NhapMang(int[], int&);
bool KtHoanThien(int);
int ViTriCuoi(int[], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	int kq = ViTriCuoi(a, n);
	cout << "Vi tri so hoan thien cuoi ki: " << kq;

	return 0;
}

void NhapMang(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

bool KtHoanThien(int n)
{
	int s = 0;
	int i = 1;
	while (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 1;
	}
	if (s == n)
		return true;
	else
		return false;
}

int ViTriCuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (KtHoanThien(a[n - 1]))
		return n - 1;
	return ViTriCuoi(a, n - 1);
}