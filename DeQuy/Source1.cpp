#include <iostream>
#include <cmath>

using namespace std;

int fibonacci(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

double ChuoiSn(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n/(1+fibonacci(n))+ChuoiSn(n-1);
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<ChuoiSn(n);
    return 0;
}


