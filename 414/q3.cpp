#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"string"
using namespace std;
typedef long long ll;
int main()
{
    string x,y;cin>>x>>y;
    int n=x.length();
    sort(x.begin(),x.end());
    sort(y.rbegin(),y.rend());
    vector<char>ans(n,'?');
    if(n%2==0)
    {
        x=x.substr(0,n/2);
        y=y.substr(0,n/2);
    }
    else
    {
        x=x.substr(0,(n+1)/2);
        y=y.substr(0,n/2);
    }
    int x1=0,x2=x.length()-1,y1=0,y2=y.length()-1;
    int l=0,h=n-1;
    bool a=true;
    while(l<=h)
    {
        if(a)
        {
            if(x[x1]>=y[y1])
            {
                ans[h]=x[x2];
                x2--;h--;
            }
            else
            {
                ans[l]=x[x1];
                x1++;l++;
            }
        }
        else
        {
            if(y[y1]<=x[x1])
            {
                ans[h]=y[y2];
                y2--;h--;
            }
            else
            {
                ans[l]=y[y1];
                y1++;l++;
            }
        }
        a=!a;
    }
    string rec(ans.begin(),ans.end());
    cout<<rec<<'\n';
}
