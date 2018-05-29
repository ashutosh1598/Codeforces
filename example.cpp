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
const int  maxn=1e5+5;
int par[maxn];
int find(int x)
{
	return x==par[x]?x:par[x]=find(par[x]);
}
void merge(int x,int y)
{
	par[find(x)]=find(y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	vector<pair<int,pair<int,int> > >rec(m);
	for(int i=0;i<m;++i)
	{
		cin>>rec[i].ss.ff>>rec[i].ss.ss>>rec[i].ff;
	}
	sort(all(rec));
	ll ans=0;
	for(int i=0;i<m;++i)
	{
		int x=rec[i].ss.ff,y=rec[i].ss.ss;
		if(find(x)!=find(y))
		{
			merge(x,y);
			ans+=rec[i].ff;
		}
	}
	cout<<ans<<'\n';
}











