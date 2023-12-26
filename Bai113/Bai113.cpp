#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int FirstEvenEle(int[], int);

int main()
{
	int n = 0;
	while (n <= 0)
	{
		cout << "\nNhap n:		";
		cin >> n;
	}
	int* arr = new int[n];
	Nhap(arr, n);
	cout << "\nXuat mang:" << endl;
	Xuat(arr, n);
	int fev = FirstEvenEle(arr, n);
	if (fev == -1)
		cout << "\nKhong co.";
	else
		cout << "\nSo chan dau tien: " << fev << ".";
	delete[]arr;
	cout << endl;
	return 1;
}

void Nhap(int arr[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap arr[" << i << "]:	";
		cin >> arr[i];
	}
}

void Xuat(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 20 == 0 && i != 0)
			cout << endl;
		cout << setw(10) << setprecision(6) << arr[i];
	}
	cout << endl;
}

int FirstEvenEle(int arr[], int n)
{
	if (n == 0)
		return -1;
	int decoy = FirstEvenEle(arr, n - 1);
	if (decoy != -1)
		return decoy;
	if (arr[n - 1] % 2 == 0)
		return arr[n - 1];
	return -1;
}