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
const int maxn=1e5+5;
vector<pii>ed;
vector<list<int> >adj;
int tou[maxn],col[maxn];
void dfs(int i,int co)
{
	tou[i]=1;
	col[i]=co;
	for(int vert:adj[i])
	{
		if(tou[vert])continue;
		dfs(vert,3-co);
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	ed.resize(n+5);
	adj.resize(n+5);
	for(int i=0;i<n-1;++i)
	{
		int x,y;
		cin>>x>>y;
		ed[i].ff=x;
		ed[i].ss=y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	dfs(1,1);
	ll a1=0,a2=0;
	for(int i=1;i<=n;++i)
	{
		if(col[i]==1)a1++;
		else a2++;
	}
	cout<<a1*a2-(n-1)<<'\n';
}



