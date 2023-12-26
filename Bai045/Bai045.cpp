#include<iostream>
using namespace std;

int TinhAk(int);
int TinhBk(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So hang thu n cua Ak: " << TinhAk(n)<<endl;
	cout << "So hang thu n cua Bk: " << TinhBk(n);
	return 0;
}

int TinhAk(int n)
{
	if (n == 1)
		return 1;
	int a = TinhAk(n - 1);
	int b = TinhBk(n - 1);
	return (3 * b + 2 * a);
}

int TinhBk(int n)
{
	if (n == 1)
		return 1;
	int a = TinhAk(n - 1);
	int b = TinhBk(n - 1);
	return (a + 3 * b);
}