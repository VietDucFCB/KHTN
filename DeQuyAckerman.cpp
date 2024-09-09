#include<iostream>

using namespace std;

int Ackerman(int x, int y);

int main()
{
    int x, y;
    cin>>x>>y;

    cout<<Ackerman(x, y)<<endl;

    return 0;
}

int Ackerman(int x, int y)
{
    if(x==0&&y>=0)
    {
        return 1;
    }
    if(x==1&&y==0)
    {
        return 2;
    }
    if(y==0&&x>=0)
    {
        return x+2;
    }
    else
    {
        return Ackerman(Ackerman(x-1, y), y-1);
    }
}