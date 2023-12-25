#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[], int&);
void Output(float[], int);
void ListIncreasingSubArrays(float[], int);

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
	cout << "\nThe increasing sub-arrays are: " << endl;
	ListIncreasingSubArrays(arr, n);
	delete[]arr;
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

void ListIncreasingSubArrays(float arr[], int n)
{
	if (n == 1)
		return;
	ListIncreasingSubArrays(arr, n - 1);
	int i = n - 1;
	while (arr[i] >= arr[i - 1] && i > 0)
	{
		i--;
		for (int j = i; j <= n - 1; j++)
		{
			cout << setw(10) << setprecision(6) << arr[j];
		}
		cout << endl;
	}
}