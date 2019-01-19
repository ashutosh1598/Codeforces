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

int cnt=0;
list<int>adj[maxn];
int n;

void dfs(int x,int p=-1)
{
    int ch=0;
    for(int ver:adj[x])
    {
        if(ver==p)continue;
        dfs(ver,x);
        ch++;
    }
    if(ch==0)cnt++;
    if(p==-1&&ch==1)cnt++;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    ld s;
    cin>>s;
    for(int i=0;i<n-1;++i)
    {
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(0);
    cout<<fixed<<setprecision(15);
    if(n==2)
    {
        cout<<s<<'\n';
        return 0;
    }
    cout<<(2*s/cnt)<<'\n';
}





