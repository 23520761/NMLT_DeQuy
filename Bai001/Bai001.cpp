#include<iostream>
using namespace std;

int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = Tong(n);
	cout << "Tong = " << kq;
	return 0;
}

int Tong(int n)
{
	if (n == 0)
		return 0;
	int s = Tong(n - 1);
	return (s + n * n);
}