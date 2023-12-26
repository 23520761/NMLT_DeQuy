#include<iostream>
#include<iomanip>

using namespace std;

void LietKe(int[], int, int, int);

int main()
{
	int a[100];
	int n, x, y;
	cin >> n >> x >> y;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	LietKe(a, n, x, y);
	return 0;
}
void LietKe(int a[], int n, int x, int y)
{
	if (n == 0)
		return;
	LietKe(a, n - 1, x, y);
	if (a[n - 1] % 2 == 0 && a[n - 1] <= y && a[n - 1] >= x)
	{
		cout << setw(6) << a[n - 1];
	}
}