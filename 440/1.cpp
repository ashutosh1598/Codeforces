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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,m;
	cin>>n>>m;
	ll m1=100,m2=100;
	set<ll>b1,b2;
	for(int i=0;i<n;++i)
	{
		ll aa;
		cin>>aa;
		b1.insert(aa);
		m1=min(m1,aa);
	}
	for(int i=0;i<m;++i)
	{
		ll aa;
		cin>>aa;
		b2.insert(aa);
		m2=min(m2,aa);
	}
	for(int i=1;i<=9;++i)
	{
		if(b1.find(i)!=b1.end()&&b2.find(i)!=b2.end())
		{
			cout<<i<<'\n';
			return 0;
		}
	}
	if(m2>m1)swap(m1,m2);
	if(m1!=m2)		
		cout<<10*m2+m1<<'\n';
}
