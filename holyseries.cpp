#include <iostream>
using namespace std;

int main()
{
    int n,a[100],c,d;
    cin>>n;
    a[0]=5,a[1]=25;
    for(int i=2;i<n;i++)
    {
        if(i%2==0)
        {
            a[i]=a[i-1]+5;
            c=a[i];
        }
        if(i%2!=0)
        {
            a[i]=5*a[i/2];
            d=a[i];
        }
    }
    if(n%2!=0)
        cout<<c;
    else
        cout<<d;
    return 0;
}
