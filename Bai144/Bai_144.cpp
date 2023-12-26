#include <iostream>
using namespace std;

void Nhap(int[], int&);
int ktHoanThien(int);
int ktTinhChat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = ktTinhChat(a, n);
	if (kq == 0)
		cout << "Co so hoan thien lon hon 256";
	else
		cout << "Khong co so hoan thien lon hon 256";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

int ktHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s = s + i;
	if (s == n)
		return true;
	return false;
}

int ktTinhChat(int a[], int n)
{
	if (n == 0)
		return 1;
	if (ktHoanThien(a[n - 1]) && a[n - 1] > 256)
		return 0;
	return ktTinhChat(a, n - 1);
}