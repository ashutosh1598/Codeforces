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
#include"unordered_set"
#include"map"
#include"unordered_map"
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
ll t,n,a,b,k;
int ok(ll x)
{
    ll aa=min(a,x),bb=min(b,x);
    ll tot=(aa+bb)*(n/2);
    if(n%2==1)
    {
        tot+=aa;
    }
    return (tot/k) >=x
        ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t>>n>>a>>b>>k;
    if(k>n)
    {
        cout<<"0\n";
        return 0;
    }
    ll lo=0,hi=t+1;
    while(lo<hi-1)
    {
        ll mid=(lo+hi)/2;
        if(ok(mid))
        {
            lo=mid;
        }
        else
        {
            hi=mid;
        }
    }
    cout<<lo<<'\n';
}
