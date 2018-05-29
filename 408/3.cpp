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
int a[maxn];
list<int>adj[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    multiset<int>my;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        my.insert(a[i]+2);
    }
    for(int i=0;i<n-1;++i)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int ans=2e9;
    for(int i=1;i<=n;++i)
    {
        int co=a[i];
        my.erase(my.find(a[i]+2));
        for(int v:adj[i])
        {
            co=max(co,a[v]+1);
            my.erase(my.find(a[v]+2));
        }
        if(!my.empty())
        {
            multiset<int>::iterator it=my.end();
            it--;
            int ma=*it;
            co=max(co,ma);
        }
        ans=min(ans,co);
        my.insert(a[i]+2);
        for(int v:adj[i])
        {
            my.insert(a[v]+2);
        }
    }
    cout<<ans<<'\n';
}









