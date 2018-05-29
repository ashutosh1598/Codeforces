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
const int maxn=1e5+10;
bool touch[maxn];
vector<list<int> >adj;
ld dfs(int i)
{
	touch[i]=1;
	ll count=0;
	ld ans=0;
	for(int vert:adj[i])
	{
		if(touch[vert])continue;
		ans+=dfs(vert);
		count++;
	}
	if(count==0)
		return 0;
	ld rr=ans/count+1;
	return rr;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	adj.resize(n+3);
	for(int i=0;i<n-1;++i)
	{
		int a,b;
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	ld ans=dfs(1);
	cout<<fixed<<setprecision(15)<<ans<<'\n';
}
