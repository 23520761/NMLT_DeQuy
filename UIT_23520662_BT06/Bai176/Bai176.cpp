#include<iostream>
using namespace std;

void Nhap(int[], int&);
void DuaVeDau(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int i = 0;
	DuaVeDau(a, n, i);
	for (int i = 0; i < n; i++)
		cout << a[i];
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void DuaVeDau(int a[], int n, int i)
{
	if (i >= n) return;
	if (a[i] % 3 != 0) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] % 3 == 0) {
				swap(a[i], a[j]);
				break;
			}
		}
	}
	DuaVeDau(a, n, i + 1);
}