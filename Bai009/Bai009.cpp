#include<iostream>
#include<iomanip>
using namespace std;

float LuyThua(double, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	double x;
	cout << "Nhap x: ";
	cin >> x;

	float kq = LuyThua(x, n);
	cout << setw(8) << setprecision(5);
	cout << "Ket qua: " << kq;
	return 1;
}

float LuyThua(double x, int n)
{
	if (n == 0)
		return 1;
	float T = LuyThua(x, n - 1);
	return (T * x);
}