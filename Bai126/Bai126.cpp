#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int Tim_doan(int[], int);

int main()
{
	int a[] = { 7,-5,9,6,-5,7,9,0 };
	cout << Tim_doan(a, 8);
	return 0;
}

int Tim_doan(int a[], int n) {
	if (n == 1) {
		if (a[0] % 2 == 0) {
			return 0;
		}
		return -1;
	}
	int lc = Tim_doan(a, n - 1);
	if (lc == -1 && a[n - 1] % 2 == 0) {
		return n - 1;
	}
	return lc;
}