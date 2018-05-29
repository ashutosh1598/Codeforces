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
const int maxn=2e5+10;
ll ai[maxn];
ll d[maxn];
ll vis[maxn];
ll n,m;
list<pll> adj[maxn];
int main()
{
    /*
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    */
    scanf("%lld%lld",&n,&m);
    //cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        ll x,y,co;
        scanf("%lld%lld%lld",&x,&y,&co);
        //cin>>x>>y>>co;
        adj[x].pb(mp(y,co));
        adj[y].pb(mp(x,co));
    }
    for(int i=1;i<=n;++i)
    {
        //cin>>ai[i];
        scanf("%lld",ai+i);
        d[i]=ai[i];
    }
    priority_queue<pll,vector<pll>,greater<pll> > pq;
    for(ll i=1;i<=n;++i)
    {
        pq.push(mp(d[i],i));
        continue;
    }
    while(!pq.empty())
    {
        pll n1=pq.top();
        pq.pop();
        ll v=n1.ss;
        if(d[v]!=n1.ff)continue;

        //if (dist[here] != p.first) continue;
        
        //if(vis[v])continue;
        //vis[v]=1;
        
        for(pii xx:adj[v])
        {
            ll cc=2*xx.ss+d[v];
            if(cc<d[xx.ff])
            {
                d[xx.ff]=cc;
                pq.push(mp(cc,xx.ff)  );
            }
        }
    }
    for(ll i=1;i<=n;++i)
    {
        //cout<<d[i]<<' ';
        printf("%lld ",d[i]);
    }
    printf("\n");
    return 0;
}



