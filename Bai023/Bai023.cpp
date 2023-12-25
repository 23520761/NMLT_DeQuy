#include <iostream>
#include <cmath>
using namespace std;

int TichChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = TichChuSo(n);
	cout << "Ket qua: " << kq;
	return 1;
}

int TichChuSo(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	int T = TichChuSo(n / 10);
	int dv = n % 10;
	return (T * dv);
}
