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
const int maxn=2500;
ll gcd(ll a,ll b)
{
	return b==0?a:gcd(b,a%b);
}
ll re[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	ll gc=0;
	int co=0;
	int one=0;
	for(int i=0;i<n;++i)
	{
		ll x;
		cin>>x;
		if(x==1)one++;;
		if(x>1)co++;
		re[i]=x;
		gc=gcd(gc,x);
	}
	if(gc>1)
	{
		cout<<"-1\n";
		exit(0);
	}
	if(n==1)
	{
		cout<<"0\n";
		exit(0);
	}
	if(one>0)
	{
		cout<<n-one<<'\n';
		exit(0);
	}
	int mi=1e7;
	for(int i=0;i<n;++i)
	{
		int pl=-1,pr=-1;
		ll g=re[i];
		for(int j=i-1;j>=0;--j)
		{
			g=gcd(re[j],g);
			if(g==1)
			{
				pl=j;
				break;
			}
		}
		g=re[i];
		for(int j=i+1;j<n;++j)
		{
			g=gcd(re[j],g);
			if(g==1)
			{
				pr=j;
				break;
			}
		}
		if(pl!=-1)
		{
			mi=min(mi,i-pl);
		}
		if(pr!=-1)
		{
			mi=min(mi,pr-i);
		}
	}
	cout<<mi+n-1<<'\n';
}










































