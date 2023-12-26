#include<iostream>
#include<iomanip>

using namespace std;
void Tao(int[], int&);
int KiemTra(int);
void Xuat(int[], int);

int main()
{
	int a[500], n;
	Tao(a, n);
	cout << "Vi tri tai do co so nguyen to la " << endl;
	Xuat(a, n);
	return 0;
}

void Tao(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << " ";
		cin >> a[i];
	}
}

int KiemTra(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	return 0;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return ;
	Xuat(a, n - 1);
	if (KiemTra(a[n - 1]) == 1)
		cout << setw(8) << n - 1;
}