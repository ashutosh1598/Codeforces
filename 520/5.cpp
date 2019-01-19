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
#define INF 1000000000
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int maxn=1e5+5;
list<int>adj[maxn];
int par[maxn];
int anc[maxn][20];
int l;
int n;
int t[4*maxn];pii tam[4*maxn];
int tin[maxn],tout[maxn],ti;
int dep[maxn];
void dfs(int u)
{
    tin[u]=ti++;
    for(int v:adj[u])
    {
        dep[v]=dep[u]+1;
        dfs(v);
    }
    tout[u]=ti++;
}
int upp(int u,int v)
{
    return tin[u]<=tin[v] &&tout[v]<=tout[u];
}
int lca(int u,int v)
{
    if(upp(u,v))return u;
    if(upp(v,u))return v;
    for(int i=l;i>=0;--i)
    {
        if(!upp(anc[u][i],v))
        {
            u=anc[u][i];
        }
    }
    return anc[u][0];
}

void build(int v,int tl,int tr)
{
    if(tl==tr)
    {
        t[v]=tl;
        tam[v]=mp(tl,tl);
        return;
    }
    int tm=(tl+tr)/2;
    build(2*v,tl,tm);
    build(2*v+1,tm+1,tr);
    t[v]=lca(t[2*v],t[2*v+1]);
    pii xx=tam[2*v],yy=tam[2*v+1];
    int fir=-1;
    if(tin[xx.ff]>tin[yy.ff])
    {
        fir=xx.ff;
    }
    else fir=yy.ff;
    int sec=-1;
    if(tin[xx.ss]<tin[yy.ss])
    {
        sec=xx.ss;
    }
    else sec=yy.ss;
    tam[v]=mp(fir,sec);
}
int qu(int v,int tl,int tr,int l,int r)
{
    //cout<<tl<<' '<<tr<<' '<<l<<' '<<r<<" tl tr l r"<<endl;
    if(l>r)return -1;
    if(l==tl&&r==tr)
    {
        return t[v];
    }
    int tm=(tl+tr)/2;
    if(r<=tm)return qu(2*v,tl,tm,l,r);
    if(l>=tm+1)return qu(2*v+1,tm+1,tr,l,r);
    int xx= qu(2*v,tl,tm,l,tm);
    int yy= qu(2*v+1,tm+1,tr,tm+1,r);
    return lca(xx,yy);
}
pii quma(int v,int tl,int tr,int l,int r)
{
    if(l==tl&&r==tr)
    {
        return tam[v];
    }
    int tm=(tl+tr)/2;
    if(r<=tm)return quma(2*v,tl,tm,l,r);
    if(l>=tm+1)return quma(2*v+1,tm+1,tr,l,r);
    pii xx=quma(2*v,tl,tm,l,tm);
    pii yy=quma(2*v+1,tm+1,tr,tm+1,r);
    int fir=-1;
    if(tin[xx.ff]>tin[yy.ff])
    {
        fir=xx.ff;
    }
    else fir=yy.ff;
    int sec=-1;
    if(tin[xx.ss]<tin[yy.ss])
    {
        sec=xx.ss;
    }
    else sec=yy.ss;
    return mp(fir,sec);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int q;
    cin>>q;
    for(int i=2;i<=n;++i)
    {
        int p;
        cin>>p;
        adj[p-1].pb(i-1);
        anc[i-1][0]=p-1;
    }
    while( (1<<l)<=n)l++;
    for(int i=1;i<=l;++i)
    {
        for(int j=0;j<n;++j)
        {
            anc[j][i]=anc[anc[j][i-1]][i-1];
        }
    }
    dfs(0);
    build(1,0,n-1);
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        pii a=quma(1,0,n-1,l,r);
        int x=a.ff;
        int y=a.ss;
        int aa=qu(1,0,n-1,l,x-1),bb=qu(1,0,n-1,x+1,r);
        int cc=qu(1,0,n-1,l,y-1),dd=qu(1,0,n-1,y+1,r);
        int ans1=-1;
        if(aa==-1)
        {
            ans1=bb;
        }
        else if(bb==-1)
        {
            ans1=aa;
        }
        else ans1=lca(aa,bb);
        int ans2=-1;
        if(cc==-1)
        {
            ans2=dd;
        }
        else if(dd==-1)
        {
            ans2=cc;
        }
        else ans2=lca(cc,dd);
        if(dep[ans1]>dep[ans2])
        {
            assert(x>=l&&x<=r);
            cout<<x+1<<' '<<dep[ans1]<<'\n';
        }
        else
        {
            assert(y>=l&&y<=r);
            cout<<y+1<<' '<<dep[ans2]<<'\n';
        }
    }
}






