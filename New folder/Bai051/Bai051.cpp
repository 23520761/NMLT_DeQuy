#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tinh(n);
	cout << "Ket qua:" << kq;
	return 1;
}

int Tinh(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	int a = Tinh(n - 1);
	int b = Tinh(n - 2);
	return ((1 + n) * a - n * b);
}
