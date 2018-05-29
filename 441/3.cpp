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
ll sof(ll x)
{
	ll ans=0;
	while(x>0)
	{
		ans+=(x%10);
		x/=10;
	}
	return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n;
	cin>>n;
	list<ll> pp;
	ll x=max(1LL,n-100);
	for(;x<=n;++x)
	{
		if(x+sof(x)==n)
		{
			pp.pb(x);
		}
	}
	cout<<pp.size()<<'\n';
	for(ll xx:pp)
	{
		cout<<xx<<'\n';
	}
}
