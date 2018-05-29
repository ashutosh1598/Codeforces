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
const int maxn=502;
int ed[maxn][maxn];
int exi=0;
list<int>adj[maxn];
pii edges[100005];
stack<int>st;
int tou[maxn],col[maxn];
int n,m;
void dfs(int u)
{
    if(exi)return;
    col[u]=1;
    st.push(u);
    for(int ve:adj[u])
    {
        if(exi==1)return;
        if(col[ve]==0)
        {
            dfs(ve);
        }
        else if(col[ve]==1)
        {
            exi=1;
            int y=ve;
            while(!st.empty())
            {
                int x=st.top();
                ed[x][y]=1;
                y=x;
                st.pop();
                if(x==ve)break;
            }
            return;
        }
    }
    st.pop();
    col[u]=2;
}
pii ced;
void df(int u)
{
    if(exi==1)return;
    col[u]=1;
    for(int ve:adj[u])
    {
        if(u==ced.ff&&ve==ced.ss)continue;
        if(col[ve]==1)
        {
            exi=1;
            return;
        }
        if(col[ve]==0)
        {
            df(ve);
        }
    }
    col[u]=2;
}
int check()
{
    mset(tou,0);
    mset(col,0);
    exi=0;
    for(int i=1;i<=n;++i)
    {
        if(tou[i]==0&&exi==0)
        {
            df(i);
        }
        if(exi)return 1;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        int x,y;
        cin>>x>>y;
        edges[i].ff=x;edges[i].ss=y;
        adj[x].pb(y);
    }
    for(int i=1;i<=n;++i)
    {
        if(exi==0&&tou[i]==0)
        {
            dfs(i);
        }
    }
    if(!exi)
    {
        cout<<"YES\n";
        return 0;
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
        {
            if(ed[i][j]==1)
            {
                ced.ff=i;
                ced.ss=j;
                //cout<<i<<' '<<j<<" dslkfj\n";
                if(check()==0)
                {
                    cout<<"YES\n";
                    return 0;
                }
            }
        }
    }
    cout<<"NO\n";
}















