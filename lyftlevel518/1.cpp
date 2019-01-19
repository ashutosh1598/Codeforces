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
int n,m;
int rec[maxn];
pair<int,pii>reh[maxn];

vector<pii>gap[maxn];
int gapos[maxn];

int par[maxn];
int find(int x)
{
    return x==par[x]?x:par[x]=find(par[x]);
}
void merge(int x,int y)
{
    x=find(x);
    y=find(y);
    if(x!=y)par[x]=y;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<maxn;++i)par[i]=i;
    cin>>n>>m;
    set<int>vert;
    for(int i=0;i<n;++i)
    {
        cin>>rec[i];
        vert.insert(rec[i]);
    }
    vert.insert(0);
    for(int i=0;i<m;++i)
    {
        cin>>reh[i].ff>>reh[i].ss.ff>>reh[i].ss.ss;
    }
    sort(rec,rec+n);
    sort(reh,reh+m);
    int ind=-1;
    for(int i=0;i<m;++i)
    {
        if(i==0||reh[i].ff>reh[i-1].ff)
        {
            gapos[++ind]=reh[i].ff;
            gap[ind].pb(mp(reh[i].ss.ff,reh[i].ss.ss));
        }
        else
        {
            gap[ind].pb(mp(reh[i-1].ss.ff,reh[i].ss.ss));
        }
    }
    int yma=ind;
    int ans=1e7;
    for(int i=0;i<n;++i)
    {
        int x=rec[0];

    }

}



