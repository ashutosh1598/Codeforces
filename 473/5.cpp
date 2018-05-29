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
ll ap2[50];
ll solve(ll n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    if(! (n&(n-1)))
    {
        ll k=0;
        while(  (1LL<<k)!=n)
        {
            k++;
        }
        return ap2[k];
    }
    ll k=0;
    while(      (2*(1LL<<k)) < n)
    {
        k++;
    }
    return ap2[k]+solve(n-(1LL<<k))+(1LL<<k);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ap2[1]=1;
    for(int i=2;i<45;++i)
    {
        ap2[i]=2*ap2[i-1]+((1LL)<<(i-1));
    }
    ll ans=solve(n);
    cout<<ans<<'\n';
}
