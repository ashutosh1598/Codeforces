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
const int maxn=1e6+10;
int ho[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<m;++i)
    {
        int pos;
        cin>>pos;
        ho[pos]=1;
    }
    int cu=1;
    while(k--)
    {
        int u,v;
        cin>>u>>v;
        if(ho[cu])break;
        if(v==cu)swap(u,v);
        if(u!=cu)continue;
        cu=v;
    }
    while(k>0)
    {
        k--;
        cin>>n>>m;
    }
    cout<<cu<<'\n';
}
