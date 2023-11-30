#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float Tinh(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float kq = Tinh(x, n);
	cout << "Ket qua la: " << setprecision(5) << fixed << kq;

	return 1;
}

float Tinh(float x, int n)
{
	if (n == 0)
		return 1 + x;
	if (n == 1)
		return 1 + x + (x * x * x) / 6;
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	float hs = x * x / ((2 * n) * (2 * n + 1));
	return	(1 + hs) * a - hs * b;
}
