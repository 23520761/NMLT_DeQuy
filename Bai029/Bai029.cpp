#include<iostream>
#include<iomanip>
using namespace std;

float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float kq = Tinh(n);
	cout << "Tinh duoc: ";
	cout << setprecision(3) << kq;
	return 0;
}

float Tinh(int n)
{
	if (n == 0)
		return 1;
	return 1 / (1 + Tinh(n - 1));
}