#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void NguyenHoa(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	NguyenHoa(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void NguyenHoa(float a[], int n)
{
	if (n == 0)
		return;
	NguyenHoa(a, n - 1);
	if (a[n - 1] > 0)
		cout << setw(4) << int(a[n - 1] + 0.5);
	else
		cout << setw(4) << int(a[n - 1] - 0.5);
}