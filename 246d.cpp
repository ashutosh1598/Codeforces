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
const int maxn=1e5+10;
int c[maxn];
set<int> ans[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int xx=maxn;
    for(int i=0;i<n;++i)
    {
        cin>>c[i+1];
        xx=min(xx,c[i+1]);
    }
    for(int i=0;i<m;++i)
    {
        int x,y;cin>>x>>y;
        if(c[x]!=c[y])
        {
            ans[c[x]].insert(c[y]);
            ans[c[y]].insert(c[x]);
        }
    }
    int col=0,max1=0;
    for(int i=1;i<=1e5;++i)
    {
        if(ans[i].size()>max1)
        {
            max1=ans[i].size();
            col=i;
        }
    }
    if(max1!=0)
        cout<<col<<'\n';
    else cout<<xx<<'\n';
}



