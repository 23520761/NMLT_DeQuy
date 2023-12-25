#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void LietKe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	LietKe(n);
	return 1;
}

void LietKe(int n)
{
	if (n == 1)
	{
		cout << setw(6) << n;
		return;
	}

	cout << setw(6) << n;
	if (n % 2 == 0)
		LietKe(n / 2);
	else
		LietKe(3 * n + 1);
}
