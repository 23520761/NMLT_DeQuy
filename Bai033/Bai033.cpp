#include<iostream>
#include<iomanip>
using namespace std;

float TinhAn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua: " << TinhAn(n);
	return 0;
}

float TinhAn(int n)
{
	if (n == 1)
		return 2;
	float an = TinhAn(n - 1);
	return (an * an + 2) / (2 * an);
}