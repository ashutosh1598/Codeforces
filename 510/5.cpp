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
const int maxn = 1e6+5;
pair<ll,pll> re[maxn];
const ll mo = 998244353;
ll gcd(ll a,ll b,ll &x,ll &y)
{
	if(b==0)
	{
		x=1;
		y=0;
		return a;
	}
	else
	{
		ll ans=gcd(b,a%b,x,y);
		ll te=x;
		x=y;
		y=te-(a/b)*y;
		return ans;
	}
}
ll inv(ll a,ll b=mo)
{
	ll x,y;
	ll gc=gcd(a,b,x,y);
    gc++;
	return ((x%b)+b)%b;
}
int main()
{
    /*
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    */
    ll n1,m;
    cin>>n1>>m;
    ll n = n1*m;
    ll ind=0;
    for(int i=0;i<n1;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>re[ind++].ff;
            re[ind-1].ss=mp(i,j);
        }
    }

    ll r1,c1;
    cin>>r1>>c1;
    r1--;c1--;
    r1 = r1*m+c1;
    ll num=re[r1].ff;
    sort(re,re+n);
    vector<pll>ar;
    ll co = 0;
    ll last = re[0];
    for(int i=0;i<n;++i)
    {
        if(re[i]==last)
        {
            co++;
        }
        else
        {
            ar.pb(mp(last,co));
            last=re[i];
            co=1;
        }
    }
    ar.pb(mp(last,co));

    for(int i=0;i<(int)ar.size();++i)
    {
        if(ar[i].ff==num)
        {
            n=i+1;
            break;
        }
    }
    vector<ll>dp(n+3,0),dp2(n+3,0),dp3(n+3,0),dp4(n+3,0);
    for(int i=0;i<n;++i)
    {
        dp2[i]=(2*ar[i].ff*ar[i].ss)%mo;//2ab
        dp3[i]=ar[i].ss%mo;//b  sk
        dp4[i]=(ar[i].ff*ar[i].ff)%mo * ar[i].ss;//b*a*a
        if(i)
        {
            dp2[i]+=dp2[i-1];
            dp2[i]%=mo;
            dp3[i]+=dp3[i-1];
            dp3[i]%=mo;
            dp4[i]+=dp4[i-1];
            dp4[i]%=mo;
        }
        printf("%lld %lld %lld %d dp2 dp3 dp4 i\n",dp2[i],dp3[i],dp4[i],i);
    }
    ll ans=0;
    for(int i=1;i<n;++i)
    {
        ll in = inv(dp3[i-1]);
        dp[i]+=(dp[i-1]*in)%mo;
        dp[i]%=mo;
        dp[i]+=((dp2[i-1]*in)%mo*ar[i].ff)%mo;
        dp[i]%=mo;
        dp[i]+=(dp4[i-1]*in)%mo;
        dp[i]%=mo;
        dp[i]+=(((dp3[i-1]*ar[i].ff)%mo*ar[i].ff)%mo*in)%mo;
        dp[i]%=mo;
        if(i==n-1)
        {
            ans = dp[i];
        }
        printf("%lld %d\n",dp[i],i);
        dp[i]*=(ar[i].ss)%mo;
        dp[i]%=mo;
        dp[i]+=dp[i-1];
        dp[i]%=mo;
    }
    cout<<ans<<'\n';
}
