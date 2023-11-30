#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int TinhAn(int);
int TinhBn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kqa = TinhAn(n);
	int kqb = TinhBn(n);
	cout << "So hang thu " << n << " cua day A la: " << kqa << endl;
	cout << "So hang thu " << n << " cua day B la: " << kqb << endl;

	return 1;
}

int TinhAn(int n)
{
	if (n == 1)
		return 2;
	int a = TinhAn(n - 1);
	int b = TinhBn(n - 1);
	return (a * a + 2 * b * b);
}

int TinhBn(int n)
{
	if (n == 1)
		return 1;
	int a = TinhAn(n - 1);
	int b = TinhBn(n - 1);
	return 2 * a * b;
}