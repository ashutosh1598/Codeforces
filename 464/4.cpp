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
int par[26];
int find(int x)
{
    return par[x]==x?x:par[x]=find(par[x]);
}
void merge(int x,int y)
{
    x=find(x);
    y=find(y);
    if(x!=y)
    {
        par[x]=y;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<26;++i)
    {
        par[i]=i;
    }
    int n;
    cin>>n;
    string x,y;
    cin>>x>>y;
    list<pair<char,char> >ans;
    for(int i=0;i<n;++i)
    {
        int c1=x[i]-'a';
        int c2=y[i]-'a';
        if(find(c1)!=find(c2))
        {
            //cout<<i<<" i\n";
            ans.pb(mp(x[i],y[i]));
            merge(c1,c2);
        }
    }
    cout<<ans.size()<<'\n';
    for(auto xx:ans)
    {
        cout<<xx.ff<<' '<<xx.ss<<'\n';
    }
}























