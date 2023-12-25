#include<iostream>

using namespace std;
float SoHang(int);

int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	cout << "So hang thu " << n << " la " << SoHang(n);
	return 0;
}

float SoHang(int n)
{
	if (n == 1)
		return 2;
	float a = SoHang(n - 1);
	return 5 * a + sqrt(24 * a * a - 8);
}