#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int TimUCLN(int[], int);
int ucln(int a, int b);

int main()
{
    int a[] = { 8,8,9,6,5,7,9 };
    cout << TimUCLN(a, 8);
    return 0;
}

int TimUCLN(int a[], int n) {
    if (n == 1) {
        return a[0];
    }
    int lc = TimUCLN(a, n - 1);
    lc = ucln(lc, a[n - 1]);
    return lc;
}

int ucln(int a, int b) {
    if (b == 0) return a;
    return ucln(b, a % b);
}