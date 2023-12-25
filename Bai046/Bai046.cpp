#include<iostream>

using namespace std;
int DayA(int);
int DayB(int);

int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	cout << "Ket qua la " << DayA(n) << " " << DayB(n);
	return 0;
}

int DayA(int n)
{
	if (n == 1)
		return 2;
	int a = DayA(n - 1);
	int b = DayB(n - 1);
	return 3 * b + 2 * a;
}

int DayB(int n)
{
	if (n == 1)
		return 1;
	int a = DayA(n - 1);
	int b = DayB(n - 1);
	return a + 3 * b;
}