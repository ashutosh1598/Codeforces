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
const int maxn=2e5+5;
ll n,t,re[maxn];

ll solve(ll a,ll b)
{
    if(a>b)return 0;
    if(a==b)
    {
        return re[a]<t?1:0;
    }
    ll m=(a+b)/2;
    ll ans = solve(a,m)+solve(m+1,b);
    if(a>m||m+1>b)return ans;
    vector<ll>my;
    ll sum=0;
    for(ll i = m;i>=a;--i)
    {
        sum+=re[i];
        my.pb(sum);
    }
    sort(all(my));
    sum=0;
    for(ll i = m+1;i<=b;++i)
    {
        sum+=re[i];
        ll lpr = t-1-sum;
        ans+= upper_bound(my.begin(),my.end(),lpr)-my.begin();
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>t;
    for(int i=0;i<n;++i)
    {
        cin>>re[i];
    }
    ll ans = solve(0,n-1);
    cout<<ans<<'\n';
}
