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
int ch(ll x)
{
    if(x<0)
    {
        return 0;
    }
    ll y=sqrt(x+0.2);
    if(y*y==x)return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll ans=-1e9;
    for(int i=0;i<n;++i)
    {
        ll x;
        cin>>x;
        if(!ch(x))
        {
            ans=max(ans,x);
        }
    }
    cout<<ans<<'\n';
}
