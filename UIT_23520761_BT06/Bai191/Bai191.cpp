#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

void Input(float[], int&);
void Output(float[], int);
int Closest(float[], int, float&, float&);

int main()
{
	int n = 0;
	while (n <= 0)
	{
		cout << "\nEnter n:		";
		cin >> n;
	}
	float* arr = new float[n];
	Input(arr, n);
	cout << "\nYour inputted array is:" << endl;
	Output(arr, n);
	float x, y;
	int checker = Closest(arr, n, x, y);
	if (checker != -1)
		cout << "Two closest elements in the inputted array are: {" << x << ", " << y << "}.";
	delete[]arr;
	cout << endl;
	return 1;
}

void Input(float arr[], int& n)
{
	cout << "\nYour inputted array will have " << n << " elements." << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter arr[" << i << "] element:	";
		cin >> arr[i];
	}
}

void Output(float arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 20 == 0 && i != 0)
			cout << endl;
		cout << setw(10) << setprecision(6) << arr[i];
	}
	cout << endl;
}

int Closest(float arr[], int n, float& x, float& y)
{
	if (n < 2)
		return -1;
	sort(arr, arr + n);
	float Dmin = abs(arr[1] - arr[0]);
	x = arr[0];
	y = arr[1];
	for (int i = 0; i < n - 1; i++)
	{
		if (abs(arr[i + 1] - arr[i]) < Dmin)
		{
			Dmin = abs(arr[i + 1] - arr[i]);
			x = arr[i];
			y = arr[i + 1];
		}
	}
	return 0;
}