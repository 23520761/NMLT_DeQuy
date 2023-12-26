#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void LietKe(float[], int);

int main()
{
	int n;
	float a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	LietKe(a, n);
	return 0;
}

void LietKe(float a[], int n)
{
	if (n <= 2)
		return;
	if (a[n - 2] > a[n - 3] && a[n - 2] < abs(a[n - 1]))
		cout << setw(10) << setprecision(3) << a[n - 2];
	LietKe(a, n - 1);
}