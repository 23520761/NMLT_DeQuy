#include<iostream>

using namespace std;
int KiemTra(int);

int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	if (KiemTra(n) == 1)
		cout << "Ton tai toan so chan ";
	else
		cout << "Co ton tai so le ";
	return 0;
}

int KiemTra(int n)
{
	n = abs(n);
	if (n < 10)
	{
		if (n % 2 == 0)
			return 1;
		else
			return 0;
	}
	int dv = n % 10;
	if (KiemTra(n / 10) == 1 && dv % 2 == 0)
		return 1;
	return 0;
}