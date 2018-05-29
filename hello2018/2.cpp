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
const int maxn=1e3+10;
list<int>adj[maxn];
int dfs(int v)
{
    int noc=0;
    int lfc=0;
    for(int x:adj[v])
    {
        noc++;
        lfc+=dfs(x);
    }
    if(noc>0&&lfc<3)
    {
        cout<<"No\n";
        exit(0);
    }
    if(noc==0)return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=2;i<=n;++i)
    {
        int x;
        cin>>x;
        adj[x].pb(i);
    }
    dfs(1);
    cout<<"Yes\n";
}
