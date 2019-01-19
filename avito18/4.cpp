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

const int maxn=1e5+5;

int par[maxn];
int xi[maxn];
int find(int x)
{
    return par[x]==x?x:par[x]=find(par[x]);
}
int merge(int x,int y)
{
    x=find(x);
    y=find(y);
    par[x]=y;
}
struct edge
{
    int a,b,w;
    edge()
    {
        ;
    }
    edge(int x,int y,int z):
        a(x),b(y),w(z)
    {
        ;
    }
    bool operator<(const edge & ob)const
    {
        return w<ob.w;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<maxn;++i)
    {
        par[i]=i;
    }
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<k;++i)
    {
        cin>>xi[i];
    }
    vector<edge>ed(m);
    for(int i=0;i<m;++i)
    {
        int a,b,c;
        cin>>a>>b>>c;
        ed[i]=edge(a,b,c);
    }
    sort(all(ed));
    int ans=0;
    for(int i=0;i<m;++i)
    {
        if(find(ed[i].a)!=find(ed[i].b))
        {
            merge(ed[i].a,ed[i].b);
            ans=ed[i].w;
        }
    }
    while(k--)
    {
        cout<<ans<<' ';
    }
    cout<<'\n';
}















