#include <iostream>
using namespace std;

void NhapMang(int[], int&);
int KtDang2m(int);
int TimGiaTri(int[], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);

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

int KtDang2m(int n)
{
	int flag = 1;
	int t = n;
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = 0;
		t = t / 2;
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}

int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (lc != 0)
		return lc;
	if (KtDang2m(a[n - 1]) == 1)
		return a[n - 1];
	return 0;
}
