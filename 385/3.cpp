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
#include"unordered_set"
#include"map"
#include"unordered_map"
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
const int maxn=1010;
int par[maxn];
bool touch[maxn];
int find(int x)
{
    return x==par[x]?x:par[x]=find(par[x]);
}
void merge(int x, int y)
{
    par[find(x)]=find(y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>spe(k),siz(k,0);
    for(int i=1;i<=n;++i)
    {
        par[i]=i;
    }
    for(int i=0;i<k;++i)
    {
        int x;cin>>x;
        spe[i]=x;
    }
    for(int i=0;i<m;++i)
    {
        int u,v;cin>>u>>v;
        merge(u,v);
    }
    for(int j=0;j<k;++j)
    {
        int v=spe[j];
        for(int i=1;i<=n;++i)
        {
            if(find(i)==find(v))
            {
                touch[i]=1;
                siz[j]++;
            }
        }
    }
    int count=0;
    for(int i=1;i<=n;++i)
    {
        if(!touch[i])
        {
            count++;
        }
    }
    sort(all(siz));
    ll ans=0;
    for(int i=0;i<k-1;++i)
    {
        ans+=1LL*siz[i]*(siz[i]-1)/2;
    }
    ans+=1LL*(siz[k-1]+count)*(siz[k-1]+count-1)/2;
    cout<<ans-m<<'\n';
}










