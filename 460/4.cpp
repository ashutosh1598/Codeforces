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
const int maxn=3e5+5;
int fr[maxn][26];
int col[maxn];
list<int>adj[maxn];
string lab;
int exi=0;
void dfs(int v)
{
    col[v]=1;
    char ch=lab[v-1];
    //cout<<ch<<' '<<v<<" ch v\n";
    fr[v][ch-'a']=1;
    for(int ver:adj[v])
    {
        if(col[ver]==0||col[ver]==2)
        {
            if(col[ver]==0)
            {
                dfs(ver);
            }
            for(int i=0;i<26;++i)
            {
                if(i==ch-'a')
                {
                    fr[v][i]=max(fr[v][i],1+fr[ver][i]);
                }
                else
                {
                    fr[v][i]=max(fr[v][i],fr[ver][i]);
                }
                //cout<<fr[v][i]<<' '<<v<<' '<<i<<" fr[v][i] v i\n";
            }
        }
        else if(col[ver]==1)
        {
            exi=1;
        }
    }
    col[v]=2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    cin>>lab;
    for(int i=0;i<m;++i)
    {
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
    }
    for(int i=1;i<=n;++i)
    {
        if(col[i]==0)
        {
            dfs(i);
        }
        if(exi)
        {
            cout<<"-1\n";
            return 0;
        }
    }

    int ans=-1;
    for(int i=1;i<=n;++i)
    {
        for(int j=0;j<26;++j)
        {
            ans=max(ans,fr[i][j]);
        }
    }
    //cout<<fr[1][0]<<" 1 a  \n";
    cout<<ans<<'\n';
}
