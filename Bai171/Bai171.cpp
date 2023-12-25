#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

void Nhap(float[], int);
int ktCon(float[], int, int, int);
int DemConGiam(float[], int, int);
int DemConGiam(float[], int);

int main() {
	float a[100];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Nhap(a, n);
	int kq = DemConGiam(a, n);
	cout << "So luong con giam: " << kq;
	return 1;
}

void Nhap(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

int ktCon(float a[], int n, int vt, int l)
{
	int flag = 1;

	for (int i = 0; i < l - 1; i++) {
		if (a[vt + i] < a[vt + i + 1])
			flag = 0;
	}
	return flag;
}

int DemConGiam(float a[], int n, int vt)
{
	if (vt == n - 1)
	{
		return 1;
	}
	int dem = 0;
	for (int i = vt + 1; i < n; i++)
	{
		if (a[i] < a[vt])
		{
			dem += DemConGiam(a, n, i);
		}
	}
	return dem;
}

int DemConGiam(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		dem += DemConGiam(a, n, i);
	}
	return dem;
}