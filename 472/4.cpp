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
ll n;
ll m[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>m[i];
    }
    vector<ll>atl(n,0);
    atl[n-1]=m[n-1]+1;
    for(int i=n-2;i>=0;--i)
    {
        atl[i]=max(m[i]+1,atl[i+1]-1);
    }
    int to=1;
    ll ans=0;
    for(int i=1;i<n;++i)
    {
        ll x=m[i];
        if(to<atl[i])
        {
            to++;
        }
        ans+=to-x-1;
    }
    cout<<ans<<'\n';
}
