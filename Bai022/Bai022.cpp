#include<iostream>

using namespace std;
int Tong(int);

int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	cout << "Tong la " << Tong(n);
	return 0;
}

int Tong(int n)
{
	n = abs(n);
	if (n == 0)
		return 0;
	int dv = n % 10;
	int s = Tong(n / 10);
	return s + dv;
}