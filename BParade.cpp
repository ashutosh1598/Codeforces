#include <iostream>
#include<cmath>
using namespace std;

int main() 
{
    int n;cin>>n;
    int l,r,sum=0,b1,b2,min=500,max=-500,maxpos=-1,minpos=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>l>>r;
        sum+=l-r;
        if(l-r>max)
        {
            max=l-r;maxpos=i;
        }
        if(l-r<min)
        {
            min=l-r;minpos=i;
        }
    }
    int b=abs(sum);
    b1=abs(sum-2*max);
    b2=abs(sum-2*min);
    if(b1<=b&&b2<=b)cout<<0;
    else if(b1>=b2)cout<<maxpos;
    else cout<<minpos;
}
