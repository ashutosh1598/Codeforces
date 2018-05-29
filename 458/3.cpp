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
ll inv(ll a,ll b)
{
	ll x,y;
	ll gc=gcd(a,b,x,y);
	return ((x%b)+b)%b;
}
const ll mo=1e9+7;
const int maxn=1000+10;
ll cho[maxn][maxn];
void choose(ll a)
{
    ll ncr=a;
    cho[a][0]=1;
    for(ll i=1;i<=a;++i)
    {
        cho[a][i]=ncr;
        ncr=ncr*(a-(i+1)+1);ncr%=mo;
        ncr*=inv(i+1,mo);
    }
}
ll ans[maxn];
//ll dp[maxn];
ll nono[maxn];
string n;
string n1;
ll k;
void build()
{
    cho[0][0]=1;
    for(int i=1;i<maxn;++i)
    {
        choose(i);
    }
}
ll func(ll x)
{
    int kch=1;
    ll res=0;
    for(int i=n1.length()-1;i>=0;--i)
    {
        if(n1[i]=='1')
        {
            res+=cho[n1.length()-i-1][kch];
            res%=mo;
            kch++;
        }
    }
    return res;
}
void solve()
{
    nono[1]=1;
    for(int i=2;i<=n1.length();++i)
    {
        nono[i]=func(i)%mo;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    ll len=n.length();
    n1=n;
    int pos=-1;
    for(int i=len-1;i>=0;--i)
    {
        if(n1[i]=='0')
        {
            pos=i;
            break;
        }
    }
    if(pos!=-1)
    {
        n1[pos]='1';
        for(int i=pos+1;i<len;++i)
        {
            n1[i]='0';
        }
    }
    else
    {
        n1="1"+n1;
        for(int i=1;i<n1.length();++i)
        {
            n1[i]='0';
        }
    }
    build();
    ans[1]=0;
    for(int i=2;i<maxn;++i)
    {
        ans[i]=1+ans[__builtin_popcount(i)];
    }
    ll dig=len-1;
    ll res=0;
    for(ll i=1;i<=dig;++i)
    {
        if(ans[i]+1==k)
        {
            res+=cho[dig][i];
            res%=mo;
        }
    }
    solve();
    ll res1=0;
    for(int i=1;i<maxn;++i)
    {
        if(ans[i]+1==k)
        {
            res1+=nono[i];
        }
    }
    cout<<res1<<'\n';
}






