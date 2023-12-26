#include<iostream>
#include<iomanip>
using namespace std;

float Tong(float,int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong = " <<setprecision(5)<< Tong(x, n);
	return 0;
}

float Tong(float x,int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 1 + x;
	float a= Tong(x, n - 1);
	float b = Tong(x, n - 2);
	return ((1 + x) * a - x * b);
}
