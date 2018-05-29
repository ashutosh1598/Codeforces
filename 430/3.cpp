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
const int maxn=2e5+5;
vector<list<int> >adj;
int num[maxn],ans[maxn];
bool tou[maxn];
vector<int>div1;
int cdiv[maxn];
void makediv(int a)
{
	for(int i=1;i*i<=a;++i)
	{
		if(a%i==0)
		{
			div1.pb(i);
			if(i*i!=a)
				div1.pb(a/i);
		}
	}
	sort(all(div1));
}
int gcd(int x,int y)
{
	return y==0?x:gcd(y,x%y);
}
void dfs1(int v,int g)
{
	int gg=gcd(g,num[v]);
	ans[v]=gg;
	tou[v]=1;
	if(v==1)
		gg=0;
	for(int vert:adj[v])
	{
		if(tou[vert])continue;
		dfs1(vert,gg);
	}
}
void dfs2(int v,int d)
{
	int aa=num[v];
	int aqr=-1;
	for(int x:div1)
	{
		if(aa%x==0)
		{
			cdiv[x]++;
		}
		if(cdiv[x]>=d-1)
		{
			aqr=max(aqr,x);
		}
	}
	tou[v]=1;
	ans[v]=max(ans[v],aqr);
	for(int vert:adj[v])
	{
		if(tou[vert])continue;
		dfs2(vert,d+1);
	}
	for(int x:div1)
	{
		if(aa%x==0)
		{
			cdiv[x]--;
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>num[i];
	adj.resize(n+3);
	mset(ans,-1);
	for(int i=0;i<n-1;++i)
	{
		int x,y;
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	makediv(num[1]);
	dfs1(1,0);
	mset(tou,0);
	for(int x:div1)
		cdiv[x]++;
	tou[1]=1;
	for(int ver:adj[1])
		dfs2(ver,2);
	for(int i=1;i<=n;++i)
	{
		cout<<ans[i]<<' ';
	}
	cout<<'\n';
}
