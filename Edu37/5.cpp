#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
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
const int maxn=2e5+5;
int n,m;
vector<int>adj[maxn];
int par[maxn],we[maxn];
int head[maxn],tou[maxn];
set<int>my;
int find(int x)
{
    return par[x]==x?x:par[x]=find(par[x]);
}
void merge(int x,int y)
{
    x=find(x);y=find(y);
    if(x!=y)
    {
        if(we[x]>we[y])swap(x,y);
        par[x]=y;
        we[y]+=we[x];
    }
}
void handle(int x,int y,int i)
{
    if(x>y)return;
    if(y==x)
    {
        merge(x,i);
        return;
    }
    merge(i,x);
    while(x<y)
    {
        if(x>y)return;
        set<int>::iterator it=lower_bound(all(my),x);
        if(it==my.end()||(*it) + 1>y)return;
        int fi=*it;
        merge(fi,fi+1);
        my.erase(it);
        tou[fi]=0;
        x=fi+1;
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;++i)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        adj[x].pb(y);
        adj[y].pb(x);
    }
    for(int i=1;i<=n;++i)
    {
        sort(all(adj[i]));
    }
    for(int i=1;i<=n;++i)
    {
        //my.insert(mp(i,i));
        if(i!=n)my.insert(i);
        par[i]=i;
        we[i]=1;
        tou[i]=1;
    }
    vector<pii> re(n);
    for(int i=0;i<n;++i)
    {
        re[i]=mp(adj[i+1].size(),i+1);
    }
    sort(all(re));
    for(pii xxx:re)
    {
        /*
        if(adj[i].size()==0)
        {
            printf("1\n%d\n",n);
        }
        */
        int i=xxx.ss;
        int cu=0;
        for(int ve:adj[i])
        {
            handle(cu+1,ve-1,i);
            cu=ve;
        }
        handle(cu+1,n,i);
        cout<<"set\n";
        for(int x:my)cout<<x<<" xxxxxxxx\n";
        cout<<"set\n";
        /*
        if(i%8000==0)
        {
            for(int i=1;i<n;++i)
            {
                if(find(i)==find(i+1))
                {
                    if(tou[i]==1)
                    {
                        my.erase(i);
                        tou[i]=0;
                    }
                }
            }
        }
        */
    }
    /*
    for(int i=1;i<=n;++i)
    {
        head[find(i)]++;
    }
    */
    int ans=0;
    vector<int>sz;
    for(int i=1;i<=n;++i)
    {
        /*
        if(head[i]>0)
        {
            ans++;
            sz.pb(head[i]);
        }
        */
        if(par[i]==i)
        {
            ans++;
            sz.pb(we[i]);
        }
    }
    sort(all(sz));
    printf("%d\n",ans);
    for(int x:sz)
    {
        printf("%d ",x);
    }
    printf("\n");
}












