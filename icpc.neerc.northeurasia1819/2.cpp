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


#define INF 2100000000
struct edge
{
    int a,b;ll cap,flow; int back;
    edge(int a,int b,int c,int d,int e):
        a(a),b(b),cap(c),flow(d),back(e)
    {

    }
};
struct max_flow
{
    vector<vector<edge> >g;
    vector<ll>ex;
    vector<int>h;
    vector<int>active;
    vector<int>count;
    int size;
    max_flow(int n):
        g(n),ex(n),h(n),count(2*n),active(n)
    {
    }
    void addEdge(int a,int b,int cap)
    {
        if(a!=b)
        {
            g[a].pb(edge(a,b,cap,0,g[b].size()));
            g[b].pb(edge(b,a,0,0,g[a].size()-1));
        }
    }
    ll maximum_flow(int s,int t)
    {
        h[s]=g.size();
        count[g.size()]++;
        count[0]=g.size()-1;
        queue<int>qq;
        active[s]=1;
        active[t]=1;
        for(int i=0;i<g[s].size();++i)
        {
            if(g[s][i].cap>g[s][i].flow)
            {
                int vert = g[s][i].b;
                g[s][i].flow+=g[s][i].cap;
                g[g[s][i].b][g[s][i].back].flow=-g[s][i].cap;
                ex[g[s][i].b]+=g[s][i].flow;
                if(active[vert]==0&&ex[vert]>0)
                {
                    qq.push(vert);
                    active[vert]=1;
                }
            }
        }
        for(;;)
        {
            if(qq.empty())
                break;
            int v=qq.front();
            active[v]=0;
            qq.pop();
            for(int j=0;j<g[v].size()&&ex[v]>0;++j)
            {
                int vert = g[v][j].b;
                if(h[v]==h[vert]+1)
                {
                    int tob=min(g[v][j].cap-g[v][j].flow,ex[v]);
                    if(tob>0)
                    {
                        if(v==s&&g[v][j].flow+tob<2)
                        {
                            continue;
                        }
                        g[v][j].flow+=tob;
                        g[vert][g[v][j].back].flow=-g[v][j].flow;
                        ex[v]-=tob;
                        ex[vert]+=tob;
                        if(active[vert]==0&&ex[vert]>0)
                        {
                            active[vert]=1;
                            qq.push(vert);
                        }
                    }
                }
            }
            if(ex[v]>0)
            {
                if(count[h[v]]==1)
                {
                    int k=h[v];
                    for(int i=0;i<g.size();++i)
                    {
                        if(h[i]>=k)
                        {
                            count[h[i]]--;
                            h[i]=max(h[i],(int)g.size()+1);
                            count[h[i]]++;
                            if(active[i]==0&&ex[i]>0)
                            {
                                qq.push(i);
                                active[i]=1;
                            }
                        }
                    }
                }
                else
                {
                    count[h[v]]--;
                    h[v]=INF;
                    for(int i=0;i<g[v].size();++i)
                    {
                        if(g[v][i].flow<g[v][i].cap)
                        {
                            h[v]=min(h[v],h[g[v][i].b]+1);
                        }
                    }
                    count[h[v]]++;
                    if(active[v]==0&&ex[v]>0)
                    {
                        qq.push(v);
                        active[v]=1;
                    }
                }
            }
        }
        ll ans=0;
        ll alt=0;
        for(int i=0;i<g[s].size();++i)
        {
            ans+=g[s][i].flow;
            if(g[s][i].flow>=2)
            {
                alt++;
            }
        }
        return alt;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        max_flow ob(n+m+2);//
        int src=0,sink=n+m+1;
        for(int i=1;i<=n;++i)
        {
            ob.addEdge(src,i,2);
        }
        for(int i=1;i<=m;++i)
        {
            ob.addEdge(n+i,sink,1);
        }
        for(int i=1;i<=n;++i)
        {
            string s;
            cin>>s;
            for(int j=0;j<s.length();++j)
            {
                if(s[j]=='1')
                {
                    ob.addEdge(i,n+j+1,1);
                }
            }
        }
        cout<<ob.maximum_flow(src,sink)<<'\n';
    }
}
