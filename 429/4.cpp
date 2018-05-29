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
const int maxn=3e5+5;
int d[maxn],deg[maxn];
int  a[maxn],b[maxn];
int inc[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		cin>>d[i];
	for(int i=0;i<m;++i)
	{
		cin>>a[i]>>b[i];
		deg[a[i]]++;
		deg[b[i]]++;
	}
	int ans=m;
	for(int i=0;i<m;++i)
	{
		int u=a[i],v=b[i];
		if(d[u]==-1&&d[v]==-1)continue;
		if(d[u]==-1)
		{
			if(deg[v]%2!=d[v])
			{
				inc[i]=-1;
				deg[u]--;deg[v]--;
				ans--;
			}
		}
		if(d[v]==-1)
		{
			if(deg[u]%2!=d[u])
			{
				inc[i]=-1;
				deg[u]--;
				deg[v]--;
				ans--;
			}
		}
	}
	for(int i=0;i<m;++i)
	{
		int u=a[i],v=b[i];
		if(d[u]==-1&&d[v]==-1)continue;
		if(d[u]==-1||d[v]==-1)
		{
			if(d[u]==-1)
			{
				if(deg[v]%2!=d[v])
				{
					if(inc[i]>=0)
					{
						inc[i]=-1;
						deg[u]--;deg[v]--;
						ans--;
					}
				}
			}
			if(d[v]==-1)
			{
				if(deg[u]%2!=d[u])
				{
					if(inc[i]>=0)
					{
						inc[i]=-1;
						deg[u]--;deg[v]--;
						ans--;
					}
				}
			}
		}
		else if(deg[u]%2!=d[u]||deg[v]%2!=d[v])
		{
			inc[i]=-1;
			deg[u]--;deg[v]--;
			ans--;
		}
	}
	for(int i=1;i<=n;++i)
	{
		if(d[i]==-1)continue;
		if(deg[i]%2!=d[i])
		{
			cout<<"-1\n";
			return 0;
		}
	}
	cout<<ans<<'\n';
	for(int i=0;i<m;++i)
	{
		if(inc[i]>=0)
			cout<<i+1<<'\n';
	}
}










