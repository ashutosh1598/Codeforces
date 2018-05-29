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
vector<pair<int,int> >rec;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int m1=-1;
    bool over=false;
    bool under=false;
    for(int i=1;i<=k;++i)
    {
        rec.pb(mp(i,min(i+k,n)));
        m1=max(m1,min(i+k,n));
        if(i+k>n)
            over=true;
    }
    int ans=-1;
    if(m1<n)
        under=true;
    if(over)
    {
        if(n-k==1)
        {
            ans=2;
        }
        else ans=3;
        for(int i=k+1;i<n;++i)
        {
            rec.pb(mp(i,i+1));
        }
    }
    else if(under)
    {
        ans=4;
        for(int i=k+1;i<=m1;++i)
        {
            rec.pb(mp(i,m1+1));
        }
        for(int i=m1+1;i<n;++i)
        {
            ans++;
            rec.pb(mp(i,i+1));
        }
    }
    else
    {
        ans=3;
        for(int i=k+1;i<n;++i)
        {
            rec.pb(mp(i,i+1));
        }
    }
    cout<<ans<<'\n';
    for(auto pp:rec)
    {
        cout<<pp.ff<<' '<<pp.ss<<'\n';
    }
}













