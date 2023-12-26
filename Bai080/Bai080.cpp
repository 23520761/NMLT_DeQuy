#include <iostream>
#include <iomanip>
using namespace std;

void LietKe(float[], int, float, float);
void Nhap(float[], int&);

int main()
{
	float a[500], x, y;
	int n;
	Nhap(a, n);
	cout << "Nhap x: "; cin >> x;
	cout << "Nhap y: "; cin >> y;
	LietKe(a, n, x, y);
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

void LietKe(float a[], int n, float x, float y)
{
	if (n == 0)
		return;
	LietKe(a, n - 1, x, y);
	if (a[n - 1] >= x && a[n - 1] <= y)
		cout << setw(10) << a[n - 1];
}


