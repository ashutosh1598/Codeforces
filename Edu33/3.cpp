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
int ci[maxn],tou[maxn];
int n,m;
list<int>adj[maxn];
int df(int v,int mi)
{
    tou[v]=1;
    for(int xx:adj[v])
    {
        if(tou[xx])continue;
        mi=min(mi,df(xx,ci[xx]));
    }
    return mi;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        cin>>ci[i+1];
    }
    for(int i=0;i<m;++i)
    {
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    ll ans=0;
    for(int i=1;i<=n;++i)
    {
        if(tou[i])continue;
        ans+=df(i,ci[i]);
    }
    cout<<ans<<'\n';
}
