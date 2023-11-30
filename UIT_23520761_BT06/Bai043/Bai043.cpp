#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int KtTang(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = KtTang(n);
	if (kq == 1)
		cout << "Cac chu so tang dan";
	else
		cout << "cac chu so khong tang dan";

	return 1;
}

int KtTang(int n)
{
	n = abs(n); 
	if (n <= 9)
		return 1;
	int dv = n % 10;
	int hc = (n / 10) % 10; 
	if (KtTang(n / 10) && hc <= dv)	
		return 1;
	return 0;
}
