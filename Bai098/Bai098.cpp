#include<iostream>

using namespace std;
int TanSuat(float[], int, float);
void Nhap(float[], int&);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	float x;
	cout << "Nhap x : ";
	cin >> x;
	int tansuat = TanSuat(a, n, x);
	cout << "Tan suat cua x trong mang la :" << tansuat;
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}

int TanSuat(float a[], int n, float x)
{
	if (n == 0)
		return 0;
	int dem = TanSuat(a, n - 1, x);
	if (a[n - 1] == x)
		dem++;
	return dem;
}