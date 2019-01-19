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

int sz[maxn];
list<int>adj[maxn];
int n;
int minnu[maxn];

int dfs(int u,int p=-1)
{
    sz[u]=0;
    for(int vert:adj[u])
    {
        if(vert==p)continue;
        sz[u]+=dfs(vert,u);
    }
    if(sz[u]==0)
    {
        return sz[u]=1;
    }
    return sz[u];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=2;i<=n;++i)
    {
        int p;
        cin>>p;
        adj[i].pb(p);
        adj[p].pb(i);
    }
    dfs(1,-1);
    vector<int>re(n);
    for(int i=0;i<n;++i)
    {
        re[i]=sz[i+1];
    }
    sort(all(re));
    int ind=1;
    for(int col=1;col<=n;++col)
    {
        int pos=upper_bound(re.begin(),re.end(),col)-re.begin();
        while(ind<=pos)
        {
            minnu[ind]=col;
            ind++;
        }
    }
    for(int i=1;i<=n;++i)
    {
        if(i-1)cout<<' ';
        cout<<minnu[i];
    }
    cout<<'\n';
}















