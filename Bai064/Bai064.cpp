#include<iostream>
#include<stdio.h>
#include <iomanip>
#define MAX 8
using namespace std;

void xuat(int);
void diChuyen(int, int, int, int, int[][MAX], int[8], int[8]);

void xuat(int n, int A[MAX][MAX]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(5) << A[i][j];
		cout << endl;
	}
	cout << endl;
}

void diChuyen(int x, int y, int dem, int n, int A[][MAX], int X[8], int Y[8]) {
	dem++;
	A[x][y] = dem;
	for (int i = 0; i < 8; i++) {

		if (dem == n * n) {
			cout << "Cac buoc di la:\n";
			xuat(n, A);
			exit(0);
		}

		int u = x + X[i];
		int v = y + Y[i];

		if (u >= 0 && u < n && v >= 0 && v < n && A[u][v] == 0)
			diChuyen(u, v, dem, n, A, X, Y);
	}
	dem--;
	A[x][y] = 0;
}
int main() {
	int A[MAX][MAX] = { 0 };
	int X[8] = { -2,-2,-1,-1, 1, 1, 2, 2 };
	int Y[8] = { -1, 1,-2, 2,-2, 2,-1, 1 };
	int dem = 0;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a, b;
	cout << "Nhap vi tri ban dau:\nx: ";
	cin >> a;
	cout << "y: ";
	cin >> b;
	diChuyen(a, b, dem, n, A, X, Y);
	cout << "Khong tim thay duong di.";
}