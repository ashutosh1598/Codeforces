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
const ll mo=1e9+7;
const ll maxn=1e6+10;
ll pare[maxn];
bool root[maxn];
ll find(ll x)
{
    return x==pare[x]?x:pare[x]=find(pare[x]);
}
void merge(ll x,ll y)
{
    pare[find(x)]=find(y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll p,k;
    cin>>p>>k;
    if(k==0)
    {
        ll ans=1;
        for(int i=1;i<=p-1;++i)
        {
            ans*=p;
            ans%=mo;
        }
        cout<<ans<<'\n';
        return 0;
    }
    ll ans=1;
    if(k==1)
        ans=p;
    for(int i=1;i<=p-1;++i)
    {
        pare[i]=i;
    }
    for(ll i=1;i<=p-1;++i)
    {
        merge(i,(k*i)%p);
    }
    for(ll i=1;i<=p-1;++i)
    {
        root[find(i)]=1;
    }
    for(ll i=1;i<=p-1;++i)
    {
        if(root[i])
        {
            ans*=p;
            ans%=mo;
        }
    }
    cout<<ans<<'\n';
}







