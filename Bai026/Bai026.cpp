#include<iostream>

using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	cout << "Tong la " << Tong(n);
	return 0;
}

float Tong(int n)
{
	if (n == 0)
		return 0;
	return sqrt(2 + Tong(n - 1));
}