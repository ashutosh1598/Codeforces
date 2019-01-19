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
struct edge
{
    int u,v,c,id;
    edge()
    {}
    edge(int a,int b,int cc,int d):
        u(a),v(b),c(cc),id(d)
    {}
    bool operator<(const edge & ob)const
    {
        return c<ob.c;
    }
};
int n,m;
vector<edge>ed;
const int maxn=1e5+3;
int rev[maxn];
int orde[maxn];
int cyex=0,tim=0;

void dfs(int x,vector<list<int> >& adj, vector<int>&col)
{
    col[x]=1;
    for(int ver:adj[x])
    {
        if(col[ver]==2)continue;
        if(col[ver]==1)
        {
            cyex=1;
        }
        if(col[ver]==0)
        {
            dfs(ver,adj,col);
        }
    }
    col[x]=2;
    orde[x]=tim++;
    
}
int nure=0;
int che(int mi)
{
    for(int i=0;i<maxn;++i)
    {
        rev[i]=orde[i]=0;
    }
    vector<list<int> >adj(n);
    for(int i=mi+1;i<ed.size();++i)
    {
        adj[ed[i].u].pb(ed[i].v);
    }
    vector<int>col(n,0);
    tim=0;
    cyex=0;
    for(int i=0;i<n;++i)
    {
        if(col[i]==0)dfs(i,adj,col);
    }
    if(cyex==1)return 0;
    nure=0;
    for(int i=0;i<=mi;++i)
    {
        int aa=ed[i].u,bb=ed[i].v;
        if(orde[aa]<orde[bb])
        {
            rev[ed[i].id]=1;
            nure++;
        }
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    ed.resize(m);
    for(int i=0;i<m;++i)
    {
        int a,b,x;
        cin>>a>>b>>x;
        a--;
        b--;
        ed[i]=edge(a,b,x,i+1);
    }
    sort(all(ed));
    int lo=-1,hi=m-1;
    while(lo<hi-1)
    {
        int mi=(lo+hi)/2;
        if(che(mi))
        {
            hi=mi;
        }
        else
        {
            lo=mi+1;
        }
    }
    if(che(lo))
    {
        int cont=0;
        if(lo>-1)
        {
            cont=ed[lo].c;
        }
        cout<<cont<<' '<<nure<<'\n';
        for(int i=1;i<=m;++i)
        {
            if(rev[i]==1)
            {
                cout<<i<<' ';
            }
        }
        cout<<'\n';
    }
    else if(che(hi))
    {
        int cont=ed[hi].c;
        cout<<cont<<' '<<nure<<'\n';
        for(int i=1;i<=m;++i)
        {
            if(rev[i]==1)
            {
                cout<<i<<' ';
            }
        }
        cout<<'\n';
    }
}








