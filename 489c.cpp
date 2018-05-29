#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"set"
#include"unordered_set"
#include"map"
#include"unordered_map"
#include"string"
#include"cstring"
#include"iomanip"
using namespace std;
typedef long long ll;
int a[150],b[150];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll m,s;
    cin>>m>>s;
    if(m==1)
    {
        if(s<10)
            cout<<s<<' '<<s<<'\n';
        else cout<<"-1 -1\n";
        return 0;
    }
    if(!   ( (1<=s)&&(s<=9*m))   )
    {
        cout<<"-1 -1\n";
        return 0;
    }
    ll t=s;
    for(int i=0;i<m;++i)
    {
        if(t<=9)
        {
            b[i]=t;
            t-=t;
            break;
        }
        else
        {
            b[i]=9;
            t-=9;
        }
    }
    t=s;
    for(int i=m-1;i>=0;--i)
    {
        if(t>9)
        {
            a[i]=9;
            t-=9;
        }
        else
        {
            a[i]=t-1;
            t-=t-1;
            break;
        }
    }
    if(t!=0)
    {
        a[0]+=t;
    }
    for(int i=0;i<m;++i)
    {
        cout<<a[i];
    }
    cout<<' ';
    for(int i=0;i<m;++i)
    {
        cout<<b[i];
    }
    cout<<'\n';
}




