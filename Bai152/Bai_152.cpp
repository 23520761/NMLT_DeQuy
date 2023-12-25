#include<iostream>
using namespace std;

void Nhap(int[], int&);
bool ktNguyenTo(int);
void XayDung(int[], int, int[], int&);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int m;
	int b[100];
	XayDung(a, n, b, m);
	for (int i = 0; i < m; i++)
		cout << b[i] << " ";
	return 0;
}

bool ktNguyenTo(int n)
{
	if (n < 2)
		return 0;
	int i;
	for (i = 2; i <= (int)sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void XayDung(int a[], int n, int b[], int& k)
{
	if (n == 0)
	{
		k = 0;
		return;
	}
	XayDung(a, n - 1, b, k);
	if (ktNguyenTo(a[n - 1]))
		b[k++] = a[n - 1];
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}
