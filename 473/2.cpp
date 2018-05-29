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
int find(int x)
{
    return par[x]==x?x:par[x]=find(par[x]);
}
void merge(int x,int y)
{
    x=find(x);
    y=find(y);
    if(x!=y)
    {
        par[x]=y;
    }
}
string re[maxn];
ll co[maxn];
map<string,int>my;
map<string,ll>mc;
list<int>adj[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<maxn;++i)par[i]=i;
    int n,k,m;
    cin>>n>>k>>m;
    for(int i=1;i<=n;++i)
    {
        cin>>re[i];
        my[re[i]]=i;
    }
    for(int i=1;i<=n;++i)
    {
        cin>>co[i];
    }
    for(int i=1;i<=k;++i)
    {
        int x;
        cin>>x;
        vector<int>pp(x);
        ll mi=1e10;
        for(int j=0;j<x;++j)
        {
            cin>>pp[j];
            mi=min(mi,co[pp[j]]);
        }
        for(int y:pp)
        {
            mc[re[y]]=mi;
        }
    }
    ll ans=0;
    for(int i=0;i<m;++i)
    {
        string x;
        cin>>x;
        ans+=mc[x];
    }
    cout<<ans<<'\n';
}











