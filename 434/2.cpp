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
ll occ[200];
ll flo[200];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ld ma=1e15,mi=-1e15;
	ll n,m;
	cin>>n>>m;
	for(int i=0;i<m;++i)
	{
		ll k,f;
		cin>>k>>f;
		occ[k]=1;
		flo[k]=f;
		ld k1=k,f1=f;
		ld eps=1e-7;
		if(f>1)
			ma=min(ma,eps+(k1-1)/(f1-1));
		mi=max(mi,k1/f1-eps);
	}
	ll rig=floor(ma);
	ll lef=ceil(mi);
	lef=max(lef,1ll);
	rig=min(rig,200ll);
	if(occ[n]==1)
	{
		cout<<flo[n]<<'\n';
		return 0;
	}
	set<ll>pfl;
	for(ll a=lef;a<=rig;++a)
	{
		pfl.insert(  (n+a-1)/a);
	}
	int pp=pfl.size();
	if(pp==1)
	{
		cout<<(*pfl.begin())<<'\n';
		return 0;
	}
	cout<<"-1\n";
}
