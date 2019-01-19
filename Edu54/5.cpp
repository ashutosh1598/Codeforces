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
const int maxn=3e5+5;
int ind=0;
int lev[maxn];
int pos[maxn],rpos[maxn];
int lastp[maxn];
int n;
list<int>adj[maxn];
int tou[maxn];
void bfs()
{
    queue<int>qq;
    qq.push(0);
    int cur=0;
    lev[0]=0;
    while(!qq.empty())
    {
        int v=qq.front();
        tou[v]=1;
        if(lev[v]==cur)cur++;
        pos[v]=ind++;
        rpos[ind-1]=v;
        qq.pop();
        for(int u:adj[v])
        {
            if(tou[u])continue;
            qq.push(u);
            lev[u]=cur;
        }
    }
    lev[n]=1e7;
    for(int i=0;i<n;++i)
    {
        int cu=rpos[i],ne=rpos[i+1];
        if(lev[ne]>lev[cu])
        {
            lastp[lev[cu]]=i;
        }
    }
}
ll t[4*maxn];
void upd(int v,int tl,int tr,int l,int r,int val)
{
    if(tl==l&&r==tr)
    {
        t[v]+=val;
        return;
    }
    int tm=(tl+tr)/2;
    t[2*v]+=t[v];
    t[2*v+1]+=t[v];
    t[v]=0;
    if(r<=tm)
    {
        upd(v*2,tl,tm,l,r,val);
        return;
    }
    if(l>=tm+1)
    {
        upd(2*v+1,tm+1,tr,l,r,val);
        return;
    }
    upd(2*v,tl,tm,l,tm,val);
    upd(2*v+1,tm+1,tr,tm+1,r,val);
}
int qu(int v,int tl,int tr,int pos)
{
    if(tl==tr)
    {
        return t[v];
    }
    int tm=(tl+tr)/2;
    t[2*v]+=t[v];
    t[2*v+1]+=t[v];
    t[v]=0;
    if(pos<=tm)
    {
        return qu(v*2,tl,tm,pos);
    }
    if(pos>=tm+1)
    {
        return qu(2*v+1,tm+1,tr,pos);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n-1;++i)
    {
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    bfs();
    int m;
    cin>>m;
    while(m--)
    {
        int v,d,x;
        cin>>v>>d>>x;
        v--;
        int pv=pos[v];
        int fle=lev[pv]+d;
        int plt=lastp[fle];
        cout<<pv<<' '<<plt<<" pv plt"<<endl;
        upd(1,0,n-1,pv,plt,x);
    }
    cout<<"sdf"<<endl;
    for(int i=0;i<n;++i)
    {
        if(i)cout<<' ';
        cout<<qu(1,0,n-1,pos[i]);
    }
    cout<<'\n';
}
