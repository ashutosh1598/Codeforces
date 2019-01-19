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

const int maxn=2e5+5;

int n;
ll sumai[maxn],cost[maxn],ai[maxn];
ll totai=0;
ll ans[maxn];
ll dep[maxn];
list<int>adj[maxn];

void dfs0(int v=0,int p=-1)
{
    sumai[v]=ai[v];
    cost[v]=dep[v]*ai[v];
    for(int vert:adj[v])
    {
        if(vert==p)continue;
        dep[vert]=1+dep[v];
        dfs0(vert,v);
        sumai[v]+=sumai[vert];
        cost[v]+=cost[vert];
    }
}
void dfs1(int v=0,int p=-1,ll ad=cost[0])
{
    ans[v]=ad;
    ll sai=0;

    for(int vert:adj[v])
    {
        if(vert==p)continue;
        dfs1(vert,v,ad-sumai[vert]+(sumai[v]-sumai[vert]-ai[v])+totai-sumai[v]+ai[v]);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>ai[i];
        totai+=ai[i];
    }
    for(int i=0;i<n-1;++i)
    {
        int x,y;
        cin>>x>>y;
        x--;y--;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs0();
    dfs1();
    ll an=-1;
    for(int i=0;i<n;++i)
    {
        //cout<<i+1<<' '<<ans[i]<<" i ans[i]\n";
        if(ans[i]>an)
        {
            an=ans[i];
        }
    }
    cout<<an<<'\n';
}
