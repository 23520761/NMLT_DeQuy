#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool KtSoHT(int);
int Dem(int[], int);

int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;

	int* arr = new int[n];
	Nhap(arr, n);
	cout << "Array vua nhap:" << endl;
	Xuat(arr, n);

	cout << "So cac so hoan thien trong array: " << Dem(arr, n) << endl;

	delete[] arr;
	return 0;
}

void Nhap(int arr[], int& n)
{
	cout << "\nNhap n:" << n << endl;
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

bool KtSoHT(int e)
{
	int sum = 0;
	for (int i = 1; i < e; i++)
		if (e % i == 0)
			sum += i;
	return (sum == e);
}

int Dem(int arr[], int n)
{
	if (n == 0)
		return 0;
	return Dem(arr, n - 1) + (KtSoHT(arr[n - 1]) ? 1 : 0);
}