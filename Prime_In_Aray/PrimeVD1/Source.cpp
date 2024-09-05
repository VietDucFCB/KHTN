#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void getIntegerInArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i << " : ";
        cin >> a[i];
    }
}
int CountPrimeInArray(int a[], int n, int count)
{
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]) == true)
        {
            count++;
        }
    }
    return count;
}
void getArrayIsPrime(int a[], int b[], int n, int m)
{
    m = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]) == true)
        {
            b[m] = a[i];
            m++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
}
int main()
{
    const int Max = 100;
    int a[Max];
    int b[Max];
    int n;
    int count ;
    cout << "Nhap so phan tu trong mang: ";
    cin >> n;
    cout << "Nhap Mang" << endl;
    getIntegerInArray(a, n);
    cout << "So so nguyen to trong mang la: ";
    CountPrimeInArray(a, n, count);
    cout << endl;
    cout << "Mang chi chua so nguyen to: ";
    getArrayIsPrime(a, b, n, count);
    return 0;
}