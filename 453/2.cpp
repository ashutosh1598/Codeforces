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
const int maxn=1e4+10;
int co[maxn];
list<int>adj[maxn];
int ans=0;
void df(int v,int col,int p=-1)
{
    if(co[v]!=col)
    {
        ans++;
        col=co[v];
    }
    for(int ver:adj[v])
    {
        if(ver==p)continue;
        df(ver,col,v);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=2;i<=n;++i)
    {
        int p;
        cin>>p;
        adj[i].pb(p);
        adj[p].pb(i);
    }
    for(int i=1;i<=n;++i)cin>>co[i];
    df(1,-1);
    cout<<ans<<'\n';
}
