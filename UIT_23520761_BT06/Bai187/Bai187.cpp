#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(int[], int&);
int DemGiaTri(int[], int);
void XuatMang(int[], int);

int main()
{
	int n;
	int a[500];
	NhapMang(a, n);
	cout << "\nMang ban dau: " << endl;
	XuatMang(a, n);
	int dem = DemGiaTri(a, n);
	cout << "\nSo luong gia tri lon hon tat ca cac gia tri dung truoc no: " << dem;
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

int DemGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] >= a[n - 1])
			flag = 0;
	if (flag == 1)
		dem++;
	return dem;
}


void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}