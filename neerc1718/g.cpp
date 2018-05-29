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
int n,m,s;
const int maxn=3e5+10;
vector<list<int> >dad;
vector<list<pii> >uad;
vector<int> e1,e2;
int tou[maxn];
int par[maxn];
int find(int x)
{
	return x==par[x]?par[x]=find(par[x]);
}
void merge(int x,int y)
{
	par[find(x)]=find(y);
}
int an1=0;
void df1(int v)
{
	tou[v]=1;an1++;
	for(int ve:dad[v])
	{
		if(tou[ve])continue;
		df1(ve);
	}
}
void dfs(int v)
{
	tou[v]=1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n>>m>>s;
	dad.resize(n+5);
	uad.resize(n+5);
	for(int i=0;i<m;++i)
	{
		int t,a,b;
		cin>>t>>a>>b;
		if(t==1)
		{
			dad[a].pb(b);
		}
		else
		{
			e1.pb(a);e2.pb(b); 
			uad[a].pb(mp(b,i));
			uad[b].pb(mp(a,i));
		}
	}
	dfs(s);
	for(int i=1;i<=n;++i)
	{
		dfs(i);
	}





	df1(s);
	cout<<an1<<'\n';
	for(int i=0;i<e1.size();++i)
	{
		int a=e1[i],b=e2[i];
		if(tou[a]&&(!tou[b]))
		{
			cout<<"-";
		}
		else
		{
			cout<<"+";
		}
	}
	cout<<'\n';
}




















