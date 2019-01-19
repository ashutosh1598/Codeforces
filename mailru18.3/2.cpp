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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    if(m==1)
    {
        cout<<(n*n)<<'\n';
        exit(0);
    }
    ll sma=0;
    for(ll i=1;i<=m;++i)
    {
        for(ll j=1;j<=m;++j)
        {
            ll x=i*i+j*j;
            if(x%m==0)
            {
                sma++;
            }
        }
    }
    ll ans = (n/m)*(n/m);
    ans*=sma;
    if(n%m==0)
    {
        cout<<ans<<'\n';
        return 0;
    }
    ll ind = n/m;ind*=m;
    ind;

    ll tis=0;

    for(ll i=ind+1;i<=n;++i)
    {
        for(ll j=1;j<=m;++j)
        {
            ll x=i*i+j*j;
            if(x%m==0)
            {
                tis++;
            }
        }
    }
    tis*=2*(n/m);
    ans+=tis;
    ll tat=0;
    for(ll i=ind+1;i<=n;++i)
    {
        for(ll j=ind+1;j<=n;++j)
        {
            ll x= i*i+j*j;
            if(x%m==0)
            {
                tat++;
            }
        }
    }
    ans+=tat;
    cout<<ans<<'\n';
}











