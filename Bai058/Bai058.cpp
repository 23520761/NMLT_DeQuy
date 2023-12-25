#include<iostream>

using namespace std;
float TinhTong(int, float);

int main()
{
	int n;
	float x;
	cout << "Nhap n ";
	cin >> n;
	cout << "Nhap x ";
	cin >> x;
	cout << "Ket qua la " << TinhTong(n, x);
	return 0;
}

float TinhTong(int n, float x)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 1 + x * x / 2;
	float a = TinhTong(n - 1, x);
	float b = TinhTong(n - 2, x);
	float hs = x * x / (2 * n - 1) / (2 * n);
	return ((1 + hs) * a - hs * b);
}