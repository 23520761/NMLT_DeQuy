#include<iostream>

using namespace std;
int SoHang(int);

int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	cout << "So hang thu " << n << " la " << SoHang(n);
	return 0;
}

int SoHang(int n)
{
	if (n == 1)
		return 2;
	return SoHang(n - 1) + 2 * n + 1;
}