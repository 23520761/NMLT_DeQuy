#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

long double Tinh(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	long double kq = Tinh(x, n);
	cout << "Ket qua: " << setprecision(5) << fixed << kq;

	return 1;
}

long double Tinh(float x, int n)
{
	if (n == 0)
		return x;
	if (n == 1)
		return (x +  x * x * x);
	long double a = Tinh(x, n - 1);
	long double b = Tinh(x, n - 2);
	return ((1 + x * x) * a - x * x * b);
}

