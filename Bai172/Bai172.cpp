#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int ktCon(int[], int, int[], int);

int main()
{
	int a[100], b[100];
	int n, m;
	cout << "Nhap mang a: " << endl;
	Nhap(a, n);
	cout << "Nhap mang b: " << endl;
	Nhap(b, m);
	int kq = ktCon(a, n, b, m);
	if (kq == 1)
		cout << "Mang a la mang con cua b";
	else
		cout << "Mang a ko la mang con cua b";
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu trong mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu [" << i << "] = ";
		cin >> a[i];
	}
}

int ktCon(int a[], int n, int b[], int m)
{
	if (n == 0) return 1;
	if (m < n) return 0;
	if (a[0] != b[0])
		return ktCon(a, n, b + 1, m - 1);
	else
		return ktCon(a + 1, n - 1, b + 1, m - 1);
}