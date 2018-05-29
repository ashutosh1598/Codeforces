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
const ll mo=998244353;
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
ll fu(ll a,ll b)
{
	ll cof=1;
	ll cc=1;
	ll ans=1;
	for(ll k=1;k<=a;++k)
	{
		cof=(cof*(b-k+1));
		cof%=mo;
		ll in=inv(k,mo);
		//cof*=in;
		cof%=mo;

		cc=(cc*(a-k+1));
		cc%=mo;
		cc*=in;
		cc%=mo;


		ans+=(cof*cc)%mo;
		ans%=mo;
	}
	return ans; 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	const ll mo=998244353;
	ll a,b,c;
	cin>>a>>b>>c;
	ll ans=fu(a,b);
	ans%=mo;
	ans*=fu(b,c);
	ans%=mo;
	ans*=fu(a,c);
	ans%=mo;
	cout<<ans<<'\n';
}















