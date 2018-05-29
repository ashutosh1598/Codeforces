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
typedef long long ll;
typedef long double ld;
const int maxn=110;
int col[maxn];
vector<list<int> >adj;
bool dfs(int i,int p)
{
    col[i]=1;
    bool a=false;
    for(int vert:adj[i])
    {
        if(vert==p)continue;
        if(col[vert]==1)
        {
            adj[vert].remove(i);
            adj[i].remove(vert);
            return true;
        }
        else if(col[vert]==0)
        {
            if(!a)
                a=dfs(vert,i);
            else bool kk=dfs(vert,i);
            if(a)
                return a;
        }
    }
    col[i]=2;
    return a;
}
bool df(int i,int p)
{
    col[i]=1;
    bool a=true;
    for(int vert:adj[i])
    {
        if(vert==p)continue;
        if(col[vert]==1)
        {
            return false;
        }
        else if(col[vert]==0)
        {
            if(a)
                a=df(vert,i);
            else bool kk=df(vert,i);
        }
    }
    col[i]=2;
    return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    adj.resize(n);
    for(int i=0;i<m;++i)
    {
        int x,y;cin>>x>>y;
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
    }
    bool cc=dfs(0,-1);
    if(!cc)
    {
        cout<<"NO\n";
        return 0;
    }
    memset(col,0,sizeof col);
    bool kk=df(0,-1);
    if(!kk)
    {
        cout<<"NO\n";
            return 0;
    }
    for(int i=0;i<n;++i)
    {
        if(!col[i])
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"FHTAGN!\n";
}

