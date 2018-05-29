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
const int maxn=1e3+5;
ll a[maxn],r[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k1,k2;
    cin>>n>>k1>>k2;
    ll k=k1+k2;
    for(int i=0;i<n;++i)cin>>a[i];
    ll sum=0;
    multiset<ll>my;
    for(int i=0;i<n;++i)
    {
        ll x;
        cin>>x;
        r[i]=abs(x-a[i]);
        my.insert(r[i]);
        sum+=r[i];
    }
    if(sum<=k)
    {
        ll di=k-sum;
        if(di%2==0)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<"1\n";
        }
        return 0;
    }
    /*
    sort(r,r+n);
    int la=n-1;
    while(k--)
    {
        if(la==0)
        {
            r[la]--;
            continue;
        }
        else if(r[la]>r[la-1]+1)
        {
            r[la]--;
        }
        else if(r[la]==r[la-1]+1)
        {
            r[la]--;
        }
        else if(r[la]==r[la-1])
        {
            r[la]--;
            la--;
        }
    }
    */
    while(k--)
    {
        auto i1=my.end();
        auto i2=--i1;
        ll x=*i2;
        my.erase(i2);
        if(x>0)
            my.insert(x-1);
        else
            my.insert(1LL);
    }
    ll ans=0;
    for(ll x:my)
    {
        ans+=x*x;
    }
    cout<<ans<<'\n';
}
