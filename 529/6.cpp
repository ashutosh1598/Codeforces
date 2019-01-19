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
int par[maxn];

int find(int x)
{
    return par[x]==x?x:par[x]=find(par[x]);
}

void merge(int x,int y)
{
    par[find(x)]=find(y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<ll>re(n);
    int pos=-1;
    ll mi=1e15;
    for(int i=0;i<n;++i)
    {
        cin>>re[i];
        if(re[i]<mi)
        {
            mi=re[i];
            pos=i;
        }
    }
    vector<pair<ll,pii> >ed;
    for(int i=0;i<m;++i)
    {
        int x,y;
        ll w;
        cin>>x>>y>>w;
        x--;y--;
        ed.pb(mp(w,mp(x,y)));
    }
    for(int i=0;i<n;++i)
    {
        if(i!=pos)
        {
            ed.pb(mp(re[i]+re[pos],mp(i,pos)));
        }
    }
    sort(all(ed));
    for(int i=0;i<maxn;++i)
    {
        par[i]=i;
    }
    ll ans=0;
    for(auto & x:ed)
    {
        if(find(x.ss.ff)!=find(x.ss.ss))
        {
            merge(x.ss.ff,x.ss.ss);
            ans+=x.ff;
        }
    }
    cout<<ans<<'\n';
}













