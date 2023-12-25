#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(int[], int&);
void HoanVi(int&, int&);
void ThemViTri(int[], int&, int, int);
void XuatMang(int[], int);

int main()
{
	int n;
	int a[500];
	int x;
	int vt;
	NhapMang(a, n);
	cout << "Nhap gia tri can them: ";
	cin >> x;
	cout << "Nhap vi tri can them: ";
	cin >> vt;
	cout << "\nMang ban dau: " << endl;
	XuatMang(a, n);
	cout << "\nMang sau khi them: " << endl;
	ThemViTri(a, n, x, vt);
	XuatMang(a, n);
	return 1;
}

void NhapMang(int a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	cout << "Nhap cac phan tu trong mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void ThemViTri(int a[], int& n, int x, int vt)
{
	if (vt == n)
	{
		a[n] = x;
		n++;
		return;
	}
	HoanVi(a[vt], x);
	ThemViTri(a, n, x, vt + 1);
}

void XuatMang(int a[], int n)
{
		for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}