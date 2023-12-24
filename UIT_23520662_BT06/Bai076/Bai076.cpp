#include <iostream>
#include <iomanip>
using namespace std;

void LietKe(int[], int);
void Nhap(int[], int&);
bool ktDang3m(int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	LietKe(a, n);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i + 1 << "]: ";
		cin >> a[i];
	}
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ktDang3m(a[n - 1]))
		cout << setw(6) << a[n - 1];
}

bool ktDang3m(int k)
{
	if (k < 1)
		return false;
	bool flag = true;
	for (int t = k; t > 1; t = t / 3)
		if (t % 3 != 0)
			flag = false;
	return flag;
}

