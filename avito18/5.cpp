#include"iomanip"
#include"iostream"
#include"limits"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"queue"
#include"stack"
#include"set"
#include"map"
#include"string"
#include"cstring"
#include"assert.h"
using namespace std;
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define mp make_pair
#define pb push_back
#define mset(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const ll maxn=1e5+5;
ll x[maxn];

ll check(ll x)
{
    ll y=sqrt(x+0.5)+0.2;
    if(y*y==x)return 1;
    return 0;
}

ll below(ll x)
{
    ll y= sqrt(x);
    if(y*y<x)return y*y;
    return (y-1)*(y-1);
}
ll next(ll x)
{
    ll y=sqrt(x+0.2)+0.2;
    if(y*y<=x)return (y+1)*(y+1);
    return y*y;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    for(int i=2;i<=n;i+=2)
    {
        cin>>x[i];
    }
    ll sum=0;
    for(int i=1;i<n;i+=2)
    {
        ll sumi=sum+x[i+1];
        while(1)
        {
            sumi=next(sumi);
            if(check(sumi-x[i+1]))break;
            if(sumi-sum-x[i+1]>1e13)
            {
                cout<<"No\n";
                return 0;
            }
        }
        x[i]=sumi-sum-x[i+1];
        sum+=x[i]+x[i+1];
    }
    cout<<"Yes\n";
    for(int i=1;i<=n;++i)
    {
        if(i-1)cout<<' ';
        cout<<x[i];
    }
    cout<<'\n';

}









