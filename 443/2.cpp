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
ll po[600],wi[600];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,k;
	cin>>n>>k;
	ll pma=-1,pos=-1;
	for(int i=1;i<=n;++i)
	{
		cin>>po[i];
		if(po[i]>pma)
		{
			pma=po[i];
			pos=i;
		}
	}
	list<ll>pp;

	for(ll i=1;i<=n;++i)pp.pb(i);

	while(1)
	{
		auto it1=pp.begin();
		it1++;
		auto it=pp.begin();
		ll i1=*it1;
		ll i2=*it;
		pp.pop_front();pp.pop_front();
		if(po[i1]<po[i2])
		{
			swap(i1,i2);
		}
		wi[i1]++;
		if(wi[i1]>=k)
		{
			cout<<po[i1]<<'\n';
			return 0;
		}
		if(i1==pos)
		{
			cout<<po[i1]<<'\n';
			return 0;
		}
		pp.pb(i2);
		pp.push_front(i1);
	}
}
























