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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<pair<pii,int> > ed(m+2);
    vector< list<pii> > adj(n+3);
    vector<pii>edc(m+1);
    for(int i=1;i<=m;++i)
    {
        cin>>ed[i].ff.ff>>ed[i].ff.ss>>ed[i].ss;
        int u=ed[i].ff.ff,v=ed[i].ff.ss;
        edc[i]=mp(ed[i].ss,i);
        adj[u].pb(mp(v,i));
    }
    sort(edc.begin()+1,edc.begin()+1+m);
    vector<int> dp(n+2,0);
    int ans=-1;
    for(int i=1;i<=m;++i)
    {
        int ceid=edc[i].ss;
        int v=ed[ceid].ff.ss;
        int u=ed[ceid].ff.ff;
        dp[v]=max(dp[v],1+dp[u]);
        ans=max(ans,dp[v]);
    }
    cout<<ans<<'\n';
}
