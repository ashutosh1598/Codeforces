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

int n;
list<pii>adj[maxn];
int st[maxn],fi[maxn],sub[maxn],rev[maxn],w[maxn];
ll ga[maxn],ans[maxn];
ll t[4*maxn];
int ti=0;

void df0(int i,int p=-1,ll pu=0)
{
    st[i]=ti++;
    rev[ti-1]=i;
    ga[i]=w[i]+pu;
    sub[i]=1;
    for(pii v:adj[i])
    {
        if(v.ff==p)continue;
        df0(v.ff,i,pu-v.ss+w[i]);
        sub[i]+=sub[v.ff];
    }
}

void build(int v,int tl,int tr)
{
    if(tl==tr)
    {
        t[v]=ga[rev[tl]];
        return;
    }
    int tm=(tl+tr)/2;
    build(2*v,tl,tm);
    build(2*v+1,tm+1,tr);
    t[v]=max(t[2*v],t[2*v+1]);
}

ll query(int v,int tl,int tr,int l,int r)
{
    if(tl==l&&tr==r)
    {
        return t[v];
    }
    int tm=(tl+tr)/2;
    if(r<=tm)
    {
        return query(2*v,tl,tm,l,r);
    }
    if(l>=tm+1)
    {
        return query(2*v+1,tm+1,tr,l,r);
    }
    return max( query(2*v,tl,tm,l,tm) , query(2*v+1,tm+1,tr,tm+1,r));
}
void df1(int i,int p=-1)
{
    ans[i]=w[i];
    ll ma=-1e15,sma=-1e15;
    for(pii v:adj[i])
    {
        if(v.ff==p)continue;
        int ch=v.ff;
        ll mach= query(1,0,n-1,st[ch],st[ch]+sub[ch]-1);
        if(1)
        {
            mach-=ga[i]-v.ss;
        }
        mach-=v.ss;
        mach+=w[i];
        //cout<<i+1<<' '<<v.ff+1<<' '<<mach<<" i v mach\n";
        if(mach>ma)
        {
            sma=ma;
            ma=mach;
        }
        else if(mach>sma)
        {
            sma=mach;
        }
        df1(ch,i);
    }
    ans[i]=max(ans[i],ma);
    ans[i]=max(ans[i],ma+sma-w[i]);
 //   cout<<i+1<<' '<<ma<<' '<<sma<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>w[i];
    }
    for(int i=0;i<n-1;++i)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        adj[a].pb(mp(b,c));
        adj[b].pb(mp(a,c));
    }
    df0(0);
    build(1,0,n-1);
    df1(0);
    /*
    for(int i=0;i<n;++i)
    {
        cout<<i+1<<' '<<ga[i]<<" i ga[i]\n";
    }
    */
    ll rea=-1e15;
    for(int i=0;i<n;++i)
    {
//        cout<<ans[i]<<' '<<i+1<<" ans i\n";
        rea=max(rea,ans[i]);
    }
    cout<<rea<<'\n';
}
