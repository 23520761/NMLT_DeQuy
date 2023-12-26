#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void DelPos(float[], int&, int);


int main()
{
	int n = 0, pos;
	while (n <= 0)
	{
		cout << "\nEnter n:		";
		cin >> n;
	}
	float* arr = new float[n];
	Nhap(arr, n);
	cout << "\nYour Nhapted array is:" << endl;
	Xuat(arr, n);
	cout << "\nEnter the position which you wanted to remove from the Nhapted array:		";
	cin >> pos;
	DelPos(arr, n, pos);
	cout << "\nEdited array is:" << endl;
	Xuat(arr, n);
	delete[]arr;
	cout << endl;
	return 1;
}

void Nhap(float arr[], int& n)
{
	cout << "\nYour Nhapted array will have " << n << " elements." << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter arr[" << i << "] element:	";
		cin >> arr[i];
	}
}

void Xuat(float arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 20 == 0 && i != 0)
			cout << endl;
		cout << setw(10) << setprecision(6) << arr[i];
	}
	cout << endl;
}

void DelPos(float arr[], int& n, int pos)
{
	if (pos == (n - 1))
	{
		n--;
		return;
	}
	arr[pos] = arr[pos + 1];
	DelPos(arr, n, pos + 1);
}