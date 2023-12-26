#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int);
void Xuat(float[], int);
int patition(float[], int, int );
void QuickSort(float[], int, int);


int main()
{
	int n;
	float low, high;
	float a[100];
	Nhap(a, n);
	cout << "\nMang ban dau:\n" << endl;
	Xuat(a, n);

	QuickSort(a, low, high);
	cout << "\nMang sau khi sap tang:\n" <<endl;
	Xuat(a, n);
	return 0;
}

void Nhap(float a[], int n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 201 - 100;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << a[n - 1];
}
 
int patition(float a[], int low, int high)
{
	float pivot = a[high];
	int left = low;
	int right = high;
	while (true)
	{
		while (left <= right && a[left] < pivot)
			left++;
		while (right >= left && a[right] > pivot)
			right--;
		if (left >= right)
			return left;
		swap(a[left], a[right]);
		left++;
		right--;
	}
	swap(a[left], a[right]);
	return left;
}

void QuickSort(float a[], int low, int high)
{
	if (low < high)
	{
		int index = patition(a, low, high);
		QuickSort(a, low, index - 1);
		QuickSort(a, index + 1, high);
	}
}
