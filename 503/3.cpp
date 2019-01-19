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

const int maxn = 1e6+5;
int n,m;
list<int>adj[maxn];
list<int>radj[maxn];

int tou[maxn],fi[maxn];
int rtou[maxn],gtou[maxn];
int groupno[maxn];
vector<int>ving[maxn];
int grc;
list<int>gadc[maxn];
int gfi[maxn];
int ti;

void dfs(int v)
{
    ti++;
    tou[v]=1;
    for(int x:adj[v])
    {
        if(tou[x]==1)continue;
        dfs(x);
    }
    ti++;
    fi[v]=ti;
}
void rdfs(int v)
{
    rtou[v]=1;
    groupno[v]=grc;
    ving[grc].pb(v);
    for(int x:radj[v])
    {
        if(rtou[x]==1)continue;
        rdfs(x);
    }
}
void gdfs(int v)
{
    gtou[v]=1;
    ti++;
    for(int x:gadc[v])
    {
        if(gtou[x]==1)continue;
        gdfs(x);
    }
    ti++;
    gfi[v]=ti;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        radj[y].pb(x);
    }
    for(int i=1;i<=n;++i)
    {
        if(tou[i]==0)
        {
            dfs(i);
        }
    }
    vector<pii>top;
    for(int i=1;i<=n;++i)
    {
        top.pb(mp(-1*fi[i],i));
    }
    sort(all(top));

    for(pii i:top)
    {
        if(rtou[i.ss]==0)
        {
            rdfs(i.ss);
            grc++;
        }
    }
    for(int i = 1;i<=n;++i)
    {
        for(int x:adj[i])
        {
            if(groupno[i]!=groupno[x])
            {
                gadc[groupno[i]].pb(groupno[x]);
            }
        }
    }
    ti=0;
    for(int i=0;i<grc;++i)
    {
        if(gtou[i]==0)
        {
            gdfs(i);
        }
    }
    vector<pii>gtop;
    for(int i=0;i<grc;++i)
    {
        gtop.pb(mp(-1*gfi[i],i));
    }
    sort(all(gtop));


    vector<int>mark(n+1,0),select(n+1,0);

    int k = 0;
    for(pii xx:gtop)
    {
        for(int v:ving[xx.ss])
        {
            if(mark[v]==0)
            {
                select[v]=1;
                ++k;
                for(int y:adj[v])
                {
                    mark[y]=1;
                }
                break;
            }
        }
    }
    cout<<k<<'\n';
    for(int i = 1;i<=n;++i)
    {
        if(select[i])
        {
            cout<<i<<' ';
        }
    }
    cout<<'\n';
}
