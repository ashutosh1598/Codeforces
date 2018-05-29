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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    map<string,string>my;
    for(int i=0;i<n;++i)
    {
        string x,y;
        cin>>x>>y;
        my[y]=x;
    }
    list<string>ans;
    for(int i=0;i<m;++i)
    {
        string x,y;
        cin>>x>>y;
        y=y.substr(0,y.length()-1);
        ans.pb(x+" "+y+";"+" #"+my[y]);
    }
    for(auto x:ans)cout<<x<<'\n';
}
