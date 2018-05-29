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
const int maxn=3000+5;
int mat[maxn][maxn];
set<int>in[maxn];
vector<list<int> >adj(maxn);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;++i)
	{
		int x,y;
		cin>>x>>y;
		mat[x][y]=1;
		adj[x].pb(y);
		in[y].insert(x);
	}
	ll ans=0;
	for(int a=1;a<=n;++a)
	{
		for(int b=1;b<=n;++b)
		{
			if(a==b)continue;
			ll co=0;
			for(int c:adj[a])
			{
				//if(in[b].find(c)!=in[b].end())
				if(mat[c][b]==1)
				{
					co++;
				}
			}
			ans+=co*(co-1)/2;
		}
	}
	cout<<ans<<'\n';
}








