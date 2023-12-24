#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

void SapNguyenToTang(int a[], int n);
bool ktNguyenTo(int x);
void Nhap(int[], int&);

int main()
{
	int a[100], n;
	Nhap(a, n);
	SapNguyenToTang(a, 8);
	for (int i = 0; i < 8; ++i) {
		cout << a[i] << " ";
	}
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}

void SapNguyenToTang(int a[], int n) {
	if (n == 1) {
		return;
	}
	for (int i = 0; i <= n - 2; ++i) {
		if (ktNguyenTo(a[n - 1]) && ktNguyenTo(a[i]) && a[i] > a[n - 1]) {
			swap(a[i], a[n - 1]);
		}
	}
	SapNguyenToTang(a, n - 1);
}

bool ktNguyenTo(int x) {
	if (x < 2) {
		return false;
	}
	for (int i = 2; i <= x / 2; ++i) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}