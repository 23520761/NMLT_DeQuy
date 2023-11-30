#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int TinhAn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	int kq = TinhAn(n);
	cout << "Ket qua: " << kq;
	return 1;
}

int TinhAn(int n)
{
	if (n == 1)
		return -2;
	return 5 * TinhAn(n - 1) + 12;
}
