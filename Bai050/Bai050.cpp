#include<iostream>

using namespace std;
int Day(int);

int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	cout << "Ket qua la " << Day(n);
	return 0;
}

int Day(int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return 3;
	int a = Day(n - 1);
	int b = Day(n - 2);
	return 5 * a - b;
}