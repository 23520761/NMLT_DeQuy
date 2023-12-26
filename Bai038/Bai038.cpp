#include<iostream>

using namespace std;
int NhoNhat(int);

int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	cout << "So nho nhat cua so nguyen " << n << " la " << NhoNhat(n);
	return 0;
}

int NhoNhat(int n)
{
	n = abs(n);
	if (n == 0)
		return 0;
	int kq = NhoNhat(n / 10);
	int dv = n % 10;
	if (dv > kq)
		return dv;
	else
		return kq;
}