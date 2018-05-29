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
const int maxn=3e5+10;
ll n,k;
ll re[maxn];
int pos(ll m)
{
	int i=0;
	int ex=n%k;
	while(1)
	{
		j=i+k-1;
		if(re[j]-re[i]>x)return false;
		while(j+1<n)
		{

		}
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n>>k;
	for(int i=0;i<n;++i)
	{
		cin>>re[i];
	}
	sort(re,re+n);
	if(n/k==1)
	{
		cout<<re[n-1]-re[0]<<'\n';
		return 0;
	}
	if(k==1)
	{
		cout<<"0\n";
		return 0;
	}
	ll lo=0,hi=re[n-1]-re[0];
	while(lo<hi-1)
	{
		ll m=(hi+lo)/2;
		if(pos(m))
		{
			hi=m;
		}
		else
		{
			lo=m;
		}
	}
	if(pos(lo))
	{
		cout<<lo<<'\n';
	}
	else
	{
		cout<<hi<<'\n';
	}
}















