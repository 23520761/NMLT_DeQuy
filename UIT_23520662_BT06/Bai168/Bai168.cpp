#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

void Xuat_con(int a[], int n, int vt, int l);
void Xuat_con(int a[], int n, int l);
void Xuat_con(int a[], int n);

int main()
{
	int a[5] = { 1,2,3,4,3 };
	int n = 5;
	Xuat_con(a, n);
	for (int l = 1; l <= n; ++l) {
		for (int vt = 0; vt <= n - l; ++vt) {
			int dem = 0;
			for (int i = vt; i < vt + l -1; ++i) {
				if (a[i] < a[i + 1]) {
					++dem;
				}
			}
			if (dem == l - 1) {
				Xuat_con(a, n, vt, l);
				cout << endl;
			}
		}
	}
	return 0;
}

void Xuat_con(int a[], int n, int vt, int l) {
	int s = 0;
	for (int i = vt; i < vt + l; ++i) {
		cout << a[i] << " ";
		s += a[i];
	}
	cout << "      " << s;
}
void Xuat_con(int a[], int n, int l) {
	for (int i = 0; i <= n - l; ++i) {
		Xuat_con(a, n, i, l);
		cout << endl;
	}
}
void Xuat_con(int a[], int n) {
	for (int i = 1; i <= n; ++i) {
		Xuat_con(a, n, i);
	}
}