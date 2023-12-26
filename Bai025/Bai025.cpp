#include<iostream>
#include<iomanip>
using namespace std;

int TichCsLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = TichCsLe(n);
	cout << "Tich cac chu so le cua n = " << kq;
	return 0;
}

int TichCsLe(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 != 0)
			return n;
		return 1;
	}
	int T = TichCsLe(n / 10);
	int dv = n % 10;
	if (dv % 2 != 0)
		return T * dv;
	return T;
}