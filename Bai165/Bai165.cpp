#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void LietKe(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(10);
	cout << endl;
	LietKe(a, n);
}