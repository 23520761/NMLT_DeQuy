#include<iostream>
using namespace std;

int KtTonTaiChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (KtTonTaiChan(n) == 1)
		cout << "So nay co chua cs chan";
	else
		cout << "So nay khong chua cs chan";
	return 0;
}

int KtTonTaiChan(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	int dv = n % 10;
	if (dv % 2 == 0)
		return 1;
	return KtTonTaiChan(n / 10);
}