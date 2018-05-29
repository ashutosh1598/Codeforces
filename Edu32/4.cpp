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
ll ch(ll n,ll k)
{
	ll ans=1;
	for(int i=0;i<k;++i)
	{
		ans*=(n-i);
	}
	for(int i=2;i<=k;++i)
	{
		ans/=i;
	}
	return ans;
}
ll der(ll n)
{
	ll ans=0;
	ll fac=1;
	for(int i=1;i<=n;++i)fac*=i;
	int p=1;
	ll pr=2;
	for(ll i=2;i<=n;++i)
	{
		ans+=p*fac/pr;
		pr*=i+1;
		p*=-1;
	}
	return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,k;
	cin>>n>>k;
	ll ans=1;
	for(int i=2;i<=k;++i)
	{
		ll x=ch(n,i)*der(i);
		ans+=x;
	}
	cout<<ans<<'\n';
}
