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
    ll n,m;
    cin>>n>>m;
    ll sum=0;
    ll ma=-1;
    vector<ll>st;
    for(int i=0;i<n;++i)
    {
        ll x;
        cin>>x;
        st.pb(x);
        ma=max(ma,x);
        sum+=x;
    }
    sort(all(st));
    int ind=1;
    for(int i=0;i<n;++i)
    {
        if(st[i]>=ind)
        {
            ind++;
        }
    }
    ll dist=ind-1;
    ll ans=n;
    if(dist<ma)
    {
        ans+=ma-dist;
    }
    cout<<sum-ans<<'\n';
}
