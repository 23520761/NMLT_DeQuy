#include <iostream>
#include <iomanip>
using namespace std;

void LietKe(float[], int);
void Nhap(float[], int&);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	LietKe(a, n);
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i + 1 << "]: ";
		cin >> a[i];
	}
}

void LietKe(float a[], int n)
{
	if (n <= 1)
		return;
	if (a[n - 2] > abs(a[n - 1]))
		cout << setw(10) << setprecision(3) << a[n - 2];
	LietKe(a, n - 1);
}


