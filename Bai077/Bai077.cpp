#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void Nhap(float[], int&);
void LietKe(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang: ";
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 201 - 100.00;
	cout << "\nMang ban dau la: ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
	cout << endl;
	cout << "Cac vi tri am trong mang la: ";
}

void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (a[n - 1] < 0)
		cout << setw(10) << n - 1;
}