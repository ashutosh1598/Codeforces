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
const int maxn=3e5+10;
int par[maxn];
int find(int x)
{
    return par[x]==x?x:par[x]=find(par[x]);
}
void merge(int x,int y)
{
    x=find(x);y=find(y);
    if(x!=y)
    {
        par[x]=y;
    }
}
int po[maxn],lay[maxn];
list<int>adj[maxn];
pii edge[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,d;
    cin>>n>>k>>d;
    for(int i=0;i<k;++i)
    {
        int x;
        cin>>x;
        po[x]=1;
    }
    for(int i=0;i<n-1;++i)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
        edge[i+1].ff=u;edge[i+1].ss=v;
    }
    for(int i=0;i<maxn;++i)par[i]=i;
    mset(lay,-1);
    for(int i=1;i<=n;++i)
    {
        if(!po[i])continue;
        queue<int>qq;
        qq.push(i);
        lay[i]=0;
        while(!qq.empty())
        {
            int v=qq.front();qq.pop();
            if(lay[v]==d)break;
            for(int ver:adj[v])
            {
                if(po[ver]==1||lay[ver]!=-1)
                {
                    continue;
                }
                qq.push(ver);
                merge(ver,v);
                lay[ver]=lay[v]+1;
            }
        }
    }
    int ans=-1;
    for(int i=1;i<=n;++i)if(po[i]==1)ans++;
    cout<<ans<<'\n';
    for(int i=1;i<=n-1;++i)
    {
        if(find(edge[i].ff)!=find(edge[i].ss))
        {
            cout<<i<<' ';
        }
    }
    if(ans)
    cout<<'\n';
}

