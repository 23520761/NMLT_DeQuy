#include <iostream>
using namespace std;

void Nhap(int[], int&);
bool ktTrongMang(int[], int, int);
bool ktMoiTrongMang(int[], int, int[], int);

int main() 
{
    int a[100];
    int m;
    Nhap(a, m);
    int b[100];
    int n;
    Nhap(b, n);
    if (ktMoiTrongMang(a, m, b, n)) 
        cout << "Tat ca cac phan tu trong mang a deu co trong mang b." << endl;
    else 
        cout << "Khong phai tat ca cac phan tu trong mang a deu co trong mang b." << endl;
    return 0;
}

bool ktTrongMang(int arr[], int n, int x) {
    if (n == 0)
        return false;
    if (arr[n - 1] == x) 
        return true;
    return ktTrongMang(arr, n - 1, x);
}

bool ktMoiTrongMang(int a[], int m, int b[], int n) {
    if (m == 0) 
        return true;
    if (!ktTrongMang(b, n, a[m - 1])) 
        return false;
    return ktMoiTrongMang(a, m - 1, b, n);
}

void Nhap(int a[], int& n)
{
    cout << "Nhap n:";
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
}