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
const ll mo=1e9+7;
const ll maxn=1e5+5;
ll ans=1;
ll fu[maxn],occ[maxn],cyc[maxn],tou[maxn],col[maxn];
list<ll>inv[maxn];
int n;
void dfs1(int x)
{
	tou[x]=1;
	col[x]=1;
	ll y=fu[x];
	if(!occ[y])continue;
	if(x==y)
	{
		cyc[x]=1;
		//return true;
	}
	if(col[y]==1)
	{
		cyc[x]=1;
		cyc[y]=1;
	}
	dfs1(y);
}
void puri(int x)
{
	cyc[x]=1;
	tou[x]=1;
	for(ll y:inv[x])
	{
		if(!tou[y]&&x!=y)
		{
			puri(y);
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	for(int i=0;i<n;++i)
	{
		int x,y;
		cin>>x>>y;
		occ[x]=1;
		fu[x]=y;
		inv[y].pb(x);
	}
	for(int i=1;i<=2*n;++i)
	{
		if(!occ[i])continue;
		if(tou[i])continue;
		dfs1(i);
	}
	mset(tou,0);
	for(int i=1;i<=2*n;++i)
	{
		if(!occ[i])continue;
		if(cyc[i]&&!tou[i])
			puri(i);
	}
}









