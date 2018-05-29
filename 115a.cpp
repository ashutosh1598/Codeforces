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
#define pb push_back
using namespace std;
typedef long long ll;
typedef long double ld;
const int maxn=2005;
bool ceo[maxn];
vector<list<int> >adj;
int dfs(int v)
{
    int ans=0;
    for(int vert:adj[v])
    {
        ans=max(ans,dfs(vert));
    }
    return 1+ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    adj.resize(n);
    for(int i=0;i<n;++i)
    {
        int x;cin>>x;
        if(x==-1)
        {
            ceo[i]=1;
        }
        else
        {
            adj[x-1].pb(i);
        }
    }
    int ans=0;
    for(int i=0;i<n;++i)
    {
        if(ceo[i])
        {
            ans=max(ans,dfs(i));
        }
    }
    cout<<ans<<'\n';
}
