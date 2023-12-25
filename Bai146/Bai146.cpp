#include<iostream>
using namespace std;
void Nhap(int[], int&);
int ktChanle(int[], int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	if (ktChanle(a, n) == 1)
		cout << "Mang co tinh chan le";
	else
		cout << "Mang khong co tinh chan le";
	return 0;
}
int ktChanle(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 0;
	if (n == 2) {
		if ((a[0] + a[1]) % 2 != 0)
			return 1;
		return 0;
	}
	if ((a[n - 1] + a[n - 2]) % 2 != 0)
		if (ktChanle(a, n - 1) == 1)
			return 1;
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}