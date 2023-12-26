#include<iostream>

using namespace std;
int TongLuyThua(int n);

int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	cout << "Tong cac luy thua bac ba la " << TongLuyThua(n);
	return 0;
}

int TongLuyThua(int n)
{
	if (n == 0)
		return 0;
	int s = TongLuyThua(n - 1);
	return s + n * n * n;
}