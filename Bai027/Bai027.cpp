#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float kq = Tinh(n);
	cout << "Ket qua: " << setprecision(5) << fixed << kq;
	return 1;
}

float Tinh(int n)
{
	if (n == 1)
		return 0;
	float s = Tinh(n - 1);
	return pow((n + s), (float)1/ n);
}
